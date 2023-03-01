#include <iostream>
#include "user_controller.h"

namespace automatedSpaceportSystem {
	void UserController::printUsers() {
		std::cout << "����� ������� ������ �������������...";
	} 
	void UserController::printUsersInfo() {
		std::cout << "����� ������� ������ ������ ���������� � �������������...";
	}
	void UserController::createUser() {
		std::cout << "����� ������� �������� ������������...";
	}
	void UserController::authorization() {
		std::cout << "����� ������� �����������...";
	}
	void UserController::logout() {
		std::cout << "����� ������� ������ ������������ �� �������...";
	}
	void UserController::changeRole() {
		std::cout << "����� ������� ����� ���� ������������...";
	}
	void UserController::deleteUser() {
		std::cout << "����� ������� �������� ������������...";
	}
	bool UserController::checkRole() {
		return true;
	}
	MenuNode** UserController::getSubmenu() {
		MenuNode** userMenuNodes = new MenuNode*[7];
		userMenuNodes[0] = new MenuNode(UserController::printUsers, new char[] {"������� ���� ������������� � �� ����� �������"}, 1);
		userMenuNodes[1] = new MenuNode(UserController::createUser, new char[] {"�����������"}, 0);
		userMenuNodes[2] = new MenuNode(UserController::authorization, new char[] {"����"}, 0);
		userMenuNodes[3] = new MenuNode(UserController::logout, new char[] {"�����"}, 1);
		userMenuNodes[4] = new MenuNode(UserController::printUsersInfo, new char[] {"������� ������ ���� ������ �������������"}, 3);
		userMenuNodes[5] = new MenuNode(UserController::changeRole, new char[] {"�������� ����� ������� ������������"}, 3);
		userMenuNodes[6] = new MenuNode(UserController::deleteUser, new char[] {"������� ������������"}, 2);

		return userMenuNodes;
	}
}