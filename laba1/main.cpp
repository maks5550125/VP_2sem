#include <Windows.h>
#include "log_controller.h"
#include "user_controller.h"
#include "worker_notes_сontroller.h"
#include "rocket_notes_сontroller.h"
#include "menu_node.h"

using namespace automatedSpaceportSystem;

void runMenu();

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	system("color F1");

	//При не правильном значении не выводится меню
	runMenu();
}

void runMenu() {
	MenuNode** logMenuNodes = LogController::getSubmenu();
	MenuNode** userMenuNodes = UserController::getSubmenu();
	MenuNode** workerNotesMenuNodes = WorkerNotesController::getSubmenu();
	MenuNode** rocketNotesMenuNodes = RocketNotesController::getSubmenu();

	MenuNode** mainMenuNodes = new MenuNode*[4];
	mainMenuNodes[0] = new MenuNode(logMenuNodes, 2, new char[] {"Печать отчетов"}, 1);
	mainMenuNodes[1] = new MenuNode(userMenuNodes, 7, new char[] {"Работа с пользователями"}, 0);
	mainMenuNodes[2] = new MenuNode(workerNotesMenuNodes, 6, new char[] {"Работа с работниками космодрома"}, 0);
	mainMenuNodes[3] = new MenuNode(rocketNotesMenuNodes, 7, new char[] {"Работа с космическими кораблями"}, 0);

	MenuNode startMenuNodes(mainMenuNodes, 4, new char[] {"Автоматизированная система космодрома"}, 0);
	startMenuNodes.run();
}