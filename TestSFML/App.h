#pragma once
#include "Menu.h"

class App
{
private:
	Menu* _menu;
	bool _setMenu(Menu* tmpMenu);
	Menu* _getMenu();

public:
	App();
	~App();
	bool run();
	void stop();

};

