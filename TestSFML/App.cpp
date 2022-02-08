#include "App.h"


bool App::_setMenu(Menu* tmpMenu)
{
	if(this->_menu = tmpMenu)
		return true;
	return false;
}

Menu* App::_getMenu()
{
	return this->_menu;
}

App::App()
{
	this->_setMenu(new Menu());
}

App::~App()
{
	delete(this->_getMenu());
}


bool App::run()
{
	while (this->_getMenu()->Draw());


	return false;
}

void App::stop()
{
}
