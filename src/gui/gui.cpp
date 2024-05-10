#include "gui.h"
int Cgui::my_init(void *p)
{
	this->name = "Cgui";
	this->alias = "gui";
	return 0;
}

Cgui::Cgui()
{
	this->my_init();
}

Cgui::~Cgui()
{

}

#ifndef GUI_TEST
#define GUI_TEST 0//1
#endif

#if GUI_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
