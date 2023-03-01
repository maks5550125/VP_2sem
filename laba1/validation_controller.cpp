#include <iostream>
#include<limits>
#include "validation_controller.h"

namespace automatedSpaceportSystem {
	//Ќе работает с отрицательными значени€ми!!!
	bool ValidationController::inputIntInRange(int* number, int min, int max) {
		int maxStrLen = ValidationController::CountNumberOfDigitsInNumber(max);
		char* str = new char[maxStrLen + 1]{};
		bool isValid = ValidationController::inputChars(str, maxStrLen);

		if (!isValid) return false;

		for (size_t i = 0; i < strlen(str); i++) {
			if (!ValidationController::CheckIfACharacterIsADigit(str[i])) {
				isValid = false;
			}
		}
		
		if (isValid) {
			int result = std::atoi(str);

			if (min <= result && result < max) {
				*number = result;
				return true;
			}
		}

		return false;
	}
	bool ValidationController::inputChars(char* str, int maxSize) {
		char tempChar{};
		char *tempStr = new char[maxSize + 1]{};
		bool isEnd{true};
		bool result(true);

		for (size_t i = 0; i < maxSize; i++) {
			tempChar = std::cin.get();

			if (tempChar != '\n') {
				tempStr[i] = tempChar;
			} else {
				isEnd = false;
				break;
			}
		}

		if (isEnd) {
			if (std::cin.get() != '\n') {
				ValidationController::consoleClear();
				return false;
			} else {
				if (tempStr[0] != '\n') {
					*str = *tempStr;
					return true;
				} else {
					return false;
				}
			}

		}
	}
	void ValidationController::consoleClear() {
		std::cin.clear();
		while (std::cin.get() != '\n');
	}
	int ValidationController::CountNumberOfDigitsInNumber(unsigned int number) {
		int result{1};

		while (number >= 10) {
			result++;
			number /= 10;
		}

		return result;
	}
	bool ValidationController::CheckIfACharacterIsADigit(char _char) {
		char* digits = new char[] {"0123456789"};
		bool isDigit{false};

		for (size_t i = 0; i < 10; i++) {
			if (_char == digits[i]) {
				isDigit = true;
				break;
			}
		}

		return isDigit;
	}
}