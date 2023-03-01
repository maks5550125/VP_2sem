#include <iostream>
#include "rocket_notes_�ontroller.h"

namespace automatedSpaceportSystem {
	void RocketNotesController::printRocketNote() {
		std::cout << "����� ������� ������ ������� � ����������� ��������...";
	}
	void RocketNotesController::createRocketNote() {
		std::cout << "����� ������� �������� ������ � ����������� ��������...";
	}
	void RocketNotesController::changeRocketNote() {
		std::cout << "����� ������� ��������� ������ � ����������� ��������...";
	}
	void RocketNotesController::removeRocketNote() {
		std::cout << "����� ������� �������� ������ � ����������� ��������...";
	}
	void RocketNotesController::sortRocketNote() {
		std::cout << "����� ������� ���������� ������� � ����������� ��������...";
	}
	void RocketNotesController::filterRocketNote() {
		std::cout << "����� ������� ���������� ������� � ����������� ��������...";
	}
	void RocketNotesController::launchRocketEarly() {
		std::cout << "����� ������� ��������������� ������� ������������ �������...";
	}
	MenuNode** RocketNotesController::getSubmenu() {
		MenuNode** rocketNotesMenuNodes = new MenuNode*[7];
		rocketNotesMenuNodes[0] = new MenuNode(RocketNotesController::printRocketNote, new char[] {"������� ������ � ����������� ��������"}, 0);
		rocketNotesMenuNodes[1] = new MenuNode(RocketNotesController::createRocketNote, new char[] {"������� ������ � ����������� �������"}, 1);
		rocketNotesMenuNodes[2] = new MenuNode(RocketNotesController::changeRocketNote, new char[] {"�������� ������ � ����������� �������"}, 1);
		rocketNotesMenuNodes[3] = new MenuNode(RocketNotesController::removeRocketNote, new char[] {"������� ������ � ����������� �������"}, 1);
		rocketNotesMenuNodes[4] = new MenuNode(RocketNotesController::sortRocketNote, new char[] {"����������� ������ � ����������� ��������"}, 1);
		rocketNotesMenuNodes[5] = new MenuNode(RocketNotesController::filterRocketNote, new char[] {"����������� ������ � ����������� ��������"}, 1);
		rocketNotesMenuNodes[6] = new MenuNode(RocketNotesController::launchRocketEarly, new char[] {"��������� ������ ������������ �������"}, 2);

		return rocketNotesMenuNodes;
	}
}