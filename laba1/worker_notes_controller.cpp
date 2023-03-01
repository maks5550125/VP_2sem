#include <iostream>
#include "worker_notes_сontroller.h"

namespace automatedSpaceportSystem {
	void WorkerNotesController::printWorkerNote() {
		std::cout << "Вызов функции вывода записей о сотрудниках...";
	}
	void WorkerNotesController::createWorkerNote() {
		std::cout << "Вызов функции создания записи о сотруднике...";
	}
	void WorkerNotesController::changeWorkerNote() {
		std::cout << "Вызов функции изменения записи о сотруднике...";
	}
	void WorkerNotesController::removeWorkerNote() {
		std::cout << "Вызов функции удаления записи о сотруднике...";
	}
	void WorkerNotesController::sortWorkerNote() {
		std::cout << "Вызов функции сортировки записи о сотруднике...";
	}
	void WorkerNotesController::filterWorkerNote() {
		std::cout << "Вызов функции фильтрации записи о сотруднике...";
	}
	MenuNode** WorkerNotesController::getSubmenu() {
		MenuNode** workerNotesMenuNodes = new MenuNode*[6];
		workerNotesMenuNodes[0] = new MenuNode(WorkerNotesController::printWorkerNote, new char[] {"Вывести записи о работниках космодрома"}, 0);
		workerNotesMenuNodes[1] = new MenuNode(WorkerNotesController::createWorkerNote, new char[] {"Создать запись о работнике космодрома"}, 1);
		workerNotesMenuNodes[2] = new MenuNode(WorkerNotesController::changeWorkerNote, new char[] {"Изменить запись о работнике космодрома"}, 1);
		workerNotesMenuNodes[3] = new MenuNode(WorkerNotesController::removeWorkerNote, new char[] {"Удалить запись о работнике космодрома"}, 1);
		workerNotesMenuNodes[4] = new MenuNode(WorkerNotesController::sortWorkerNote, new char[] {"Сортировать записи о работниках космодрома"}, 1);
		workerNotesMenuNodes[5] = new MenuNode(WorkerNotesController::filterWorkerNote, new char[] {"Фильтровать записи о работниках космодрома"}, 1);

		return workerNotesMenuNodes;
	}
}