#ifndef MENU_NODE_H
#define MENU_NODE_H

namespace automatedSpaceportSystem {
	class MenuNode {
	public:
		MenuNode(void(*handler)(), char* title, int accessCode);
		MenuNode(MenuNode** menuNodes, int countNodes, char* title, int accessCode);
		char* getTtile();
		int getAccessCode();
		void run();
	private:
		MenuNode** menuNodes;
		int countNodes;
		char* title;
		bool isSubmenu;
		int accessCode;
		void(*handler)();
		void runSubmenu();
		void printSubmenu();
		int getSelectedIndex();
		void runSelectedFunc(int index);
	};
}

#endif
