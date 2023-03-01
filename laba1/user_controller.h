#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H

#include "menu_node.h"

namespace automatedSpaceportSystem {
	class UserController {
	public:
		static void printUsers();
		static void printUsersInfo();
		static void createUser();
		static void authorization();
		static void logout();
		static void changeRole();
		static void deleteUser();
		static bool checkRole();
		static MenuNode** getSubmenu();
	};
}

#endif