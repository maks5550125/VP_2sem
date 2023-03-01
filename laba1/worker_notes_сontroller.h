#ifndef WORKER_NOTES_CONTROLLER_H
#define WORKER_NOTES_CONTROLLER_H

#include "menu_node.h"

namespace automatedSpaceportSystem {
	class WorkerNotesController {
	public:
		static void printWorkerNote();
		static void createWorkerNote();
		static void changeWorkerNote();
		static void removeWorkerNote();
		static void sortWorkerNote();
		static void filterWorkerNote();
		static MenuNode** getSubmenu();
	};
}

#endif