#include "App.h"


bool App::_setMenu(Menu* tmpMenu)
{
	return false;
}

Menu* App::_getMenu()
{
	return nullptr;
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
