#ifndef ROCKET_NOTES_CONTROLLER_H
#define ROCKET_NOTES_CONTROLLER_H

#include "menu_node.h"

namespace automatedSpaceportSystem {
	class RocketNotesController {
	public:
		static void printRocketNote();
		static void createRocketNote();
		static void changeRocketNote();
		static void removeRocketNote();
		static void sortRocketNote();
		static void filterRocketNote();
		static void launchRocketEarly();
		static MenuNode** getSubmenu();
	};
}

#endif