#include <iostream>
#include "user_controller.h"

namespace automatedSpaceportSystem {
	void UserController::printUsers() {
		std::cout << "Вызов функции вывода пользователей...";
	} 
	void UserController::printUsersInfo() {
		std::cout << "Вызов функции вывода полной информации о пользователях...";
	}
	void UserController::createUser() {
		std::cout << "Вызов функции создания пользователя...";
	}
	void UserController::authorization() {
		std::cout << "Вызов функции авторизации...";
	}
	void UserController::logout() {
		std::cout << "Вызов функции выхода пользователя из системы...";
	}
	void UserController::changeRole() {
		std::cout << "Вызов функции смены роли пользователя...";
	}
	void UserController::deleteUser() {
		std::cout << "Вызов функции удаления пользователя...";
	}
	bool UserController::checkRole() {
		return true;
	}
	MenuNode** UserController::getSubmenu() {
		MenuNode** userMenuNodes = new MenuNode*[7];
		userMenuNodes[0] = new MenuNode(UserController::printUsers, new char[] {"Вывести всех пользователей и их права доступа"}, 1);
		userMenuNodes[1] = new MenuNode(UserController::createUser, new char[] {"Регистрация"}, 0);
		userMenuNodes[2] = new MenuNode(UserController::authorization, new char[] {"Вход"}, 0);
		userMenuNodes[3] = new MenuNode(UserController::logout, new char[] {"Выход"}, 1);
		userMenuNodes[4] = new MenuNode(UserController::printUsersInfo, new char[] {"Вывести полную базу данных пользователей"}, 3);
		userMenuNodes[5] = new MenuNode(UserController::changeRole, new char[] {"Изменить права доступа пользователя"}, 3);
		userMenuNodes[6] = new MenuNode(UserController::deleteUser, new char[] {"Удалить пользователя"}, 2);

		return userMenuNodes;
	}
}