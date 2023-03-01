#ifndef LOG_CONTROLLER_H
#define LOG_CONTROLLER_H

#include "menu_node.h"

namespace automatedSpaceportSystem {
	class LogController {
	public:
		static void outputWorkerNotes();
		static void outputRocketNotes();
		static MenuNode** getSubmenu();
	};
}

#endif