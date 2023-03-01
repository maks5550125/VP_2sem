#include <iostream>
#include "menu_node.h"
#include "validation_controller.h"

namespace automatedSpaceportSystem {
	MenuNode::MenuNode(void(*handler)(), char* title, int accessCode) {
		this->handler = handler;
		this->title = title;
		this->accessCode = accessCode;
		this->isSubmenu = false;
	}
	MenuNode::MenuNode(MenuNode** menuNodes, int countNodes, char* title, int accessCode) {
		this->menuNodes = menuNodes;
		this->countNodes = countNodes;
		this->title = title;
		this->accessCode = accessCode;
		this->isSubmenu = true;
	}
	char* MenuNode::getTtile() {
		return title;
	}
	int MenuNode::getAccessCode() {
		return accessCode;
	}
	void MenuNode::run() {
		if (!this->isSubmenu) {
			this->handler();
			std::cout << "\n\n";
			system("pause");
		} else {
			this->runSubmenu();
		}
	}
	void MenuNode::runSubmenu() {
		bool needGetout{false};
		int value{-1};

		while (!needGetout) {
			printSubmenu();
			value = getSelectedIndex();

			if (value) {
				runSelectedFunc(value);
			} else {
				needGetout = true;
			}
		}
	}
	void MenuNode::printSubmenu() {
		std::cout << this->getTtile() << ":" << "\n\n";
		for (size_t i = 0; i < this->countNodes; i++) {
			std::cout << i + 1 << ") ";
			switch (this->menuNodes[i]->getAccessCode()) {
			case 0:
				std::cout << "(guest) ";
				break;
			case 1:
				std::cout << "(default user) ";
				break;
			case 2:
				std::cout << "(admin) ";
				break;
			case 3:
				std::cout << "(main admin) ";
				break;
			}
			std::cout << this->menuNodes[i]->getTtile() << "." << "\n";
		}
		std::cout << "0) Выход/Назад.\n";
	}
	int MenuNode::getSelectedIndex() {
		int* value = new int {};
		bool valueIsValid{false};

		while (!valueIsValid) {
			std::cout << "\nВведите номер пункта: ";
			valueIsValid = ValidationController::inputIntInRange(value, 0, this->countNodes + 1);
			system("cls");

			if (!valueIsValid) {
				this->printSubmenu();
				std::cout << "\nНекорректное значение...";
			}
		}

		return *value;
	}
	void MenuNode::runSelectedFunc(int index) {
		this->menuNodes[index - 1]->run();
		system("cls");
	}
}