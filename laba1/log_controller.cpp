#include <iostream>
#include "log_controller.h"

namespace automatedSpaceportSystem {
	void LogController::outputWorkerNotes() {
		std::cout << "Вызов функции записи отчета работников...";
	}
	void LogController::outputRocketNotes() {
		std::cout << "Вызов функции записи отчета космических судов...";
	}
	MenuNode** LogController::getSubmenu() {
		MenuNode** logMenuNodes = new MenuNode*[2];
		logMenuNodes[0] = new MenuNode(LogController::outputWorkerNotes, new char[] {"Вывод в файл информации о работниках космодрома"}, 1);
		logMenuNodes[1] = new MenuNode(LogController::outputRocketNotes, new char[] {"Вывод в файл информации о космических суднах и их текущем состоянии"}, 1);

		return logMenuNodes;
	}
}