#include <iostream>
#include "worker_notes_�ontroller.h"

namespace automatedSpaceportSystem {
	void WorkerNotesController::printWorkerNote() {
		std::cout << "����� ������� ������ ������� � �����������...";
	}
	void WorkerNotesController::createWorkerNote() {
		std::cout << "����� ������� �������� ������ � ����������...";
	}
	void WorkerNotesController::changeWorkerNote() {
		std::cout << "����� ������� ��������� ������ � ����������...";
	}
	void WorkerNotesController::removeWorkerNote() {
		std::cout << "����� ������� �������� ������ � ����������...";
	}
	void WorkerNotesController::sortWorkerNote() {
		std::cout << "����� ������� ���������� ������ � ����������...";
	}
	void WorkerNotesController::filterWorkerNote() {
		std::cout << "����� ������� ���������� ������ � ����������...";
	}
	MenuNode** WorkerNotesController::getSubmenu() {
		MenuNode** workerNotesMenuNodes = new MenuNode*[6];
		workerNotesMenuNodes[0] = new MenuNode(WorkerNotesController::printWorkerNote, new char[] {"������� ������ � ���������� ����������"}, 0);
		workerNotesMenuNodes[1] = new MenuNode(WorkerNotesController::createWorkerNote, new char[] {"������� ������ � ��������� ����������"}, 1);
		workerNotesMenuNodes[2] = new MenuNode(WorkerNotesController::changeWorkerNote, new char[] {"�������� ������ � ��������� ����������"}, 1);
		workerNotesMenuNodes[3] = new MenuNode(WorkerNotesController::removeWorkerNote, new char[] {"������� ������ � ��������� ����������"}, 1);
		workerNotesMenuNodes[4] = new MenuNode(WorkerNotesController::sortWorkerNote, new char[] {"����������� ������ � ���������� ����������"}, 1);
		workerNotesMenuNodes[5] = new MenuNode(WorkerNotesController::filterWorkerNote, new char[] {"����������� ������ � ���������� ����������"}, 1);

		return workerNotesMenuNodes;
	}
}