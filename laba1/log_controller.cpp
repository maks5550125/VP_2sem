#include <iostream>
#include "log_controller.h"

namespace automatedSpaceportSystem {
	void LogController::outputWorkerNotes() {
		std::cout << "����� ������� ������ ������ ����������...";
	}
	void LogController::outputRocketNotes() {
		std::cout << "����� ������� ������ ������ ����������� �����...";
	}
	MenuNode** LogController::getSubmenu() {
		MenuNode** logMenuNodes = new MenuNode*[2];
		logMenuNodes[0] = new MenuNode(LogController::outputWorkerNotes, new char[] {"����� � ���� ���������� � ���������� ����������"}, 1);
		logMenuNodes[1] = new MenuNode(LogController::outputRocketNotes, new char[] {"����� � ���� ���������� � ����������� ������ � �� ������� ���������"}, 1);

		return logMenuNodes;
	}
}