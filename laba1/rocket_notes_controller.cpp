#include <iostream>
#include "rocket_notes_сontroller.h"

namespace automatedSpaceportSystem {
	void RocketNotesController::printRocketNote() {
		std::cout << "Вызов функции вывода записей о космических кораблях...";
	}
	void RocketNotesController::createRocketNote() {
		std::cout << "Вызов функции создание записи о космических кораблях...";
	}
	void RocketNotesController::changeRocketNote() {
		std::cout << "Вызов функции изменение записи о космических кораблях...";
	}
	void RocketNotesController::removeRocketNote() {
		std::cout << "Вызов функции удаления записи о космических кораблях...";
	}
	void RocketNotesController::sortRocketNote() {
		std::cout << "Вызов функции сортировки записей о космических кораблях...";
	}
	void RocketNotesController::filterRocketNote() {
		std::cout << "Вызов функции фильтрации записей о космических кораблях...";
	}
	void RocketNotesController::launchRocketEarly() {
		std::cout << "Вызов функции принудительного запуска космического корабля...";
	}
	MenuNode** RocketNotesController::getSubmenu() {
		MenuNode** rocketNotesMenuNodes = new MenuNode*[7];
		rocketNotesMenuNodes[0] = new MenuNode(RocketNotesController::printRocketNote, new char[] {"Вывести записи о космических кораблях"}, 0);
		rocketNotesMenuNodes[1] = new MenuNode(RocketNotesController::createRocketNote, new char[] {"Создать запись о космическом корабле"}, 1);
		rocketNotesMenuNodes[2] = new MenuNode(RocketNotesController::changeRocketNote, new char[] {"Изменить запись о космическом корабле"}, 1);
		rocketNotesMenuNodes[3] = new MenuNode(RocketNotesController::removeRocketNote, new char[] {"Удалить запись о космическом корабле"}, 1);
		rocketNotesMenuNodes[4] = new MenuNode(RocketNotesController::sortRocketNote, new char[] {"Сортировать записи о космических кораблях"}, 1);
		rocketNotesMenuNodes[5] = new MenuNode(RocketNotesController::filterRocketNote, new char[] {"Фильтровать записи о космических кораблях"}, 1);
		rocketNotesMenuNodes[6] = new MenuNode(RocketNotesController::launchRocketEarly, new char[] {"Досрочный запуск космическиго корабля"}, 2);

		return rocketNotesMenuNodes;
	}
}