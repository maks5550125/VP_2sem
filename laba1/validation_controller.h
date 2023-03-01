#ifndef VALIDATION_CONTROLLER_H
#define VALIDATION_CONTROLLER_H

namespace automatedSpaceportSystem {
	class ValidationController {
	public:
		static bool inputIntInRange(int* number, int min, int max);
		static bool inputChars(char* str, int maxSize);
		static void consoleClear();
		static int CountNumberOfDigitsInNumber(unsigned int number);
		static bool CheckIfACharacterIsADigit(char _char);
	};
}

#endif