#include "gui_qt.h"
int Cgui_qt::my_init(void *p)
{
	this->name = "Cgui_qt";
	this->alias = "gui_qt";
	return 0;
}

Cgui_qt::Cgui_qt()
{
	this->my_init();
}

Cgui_qt::~Cgui_qt()
{

}

#ifndef GUI_QT_TEST
#define GUI_QT_TEST 0//1
#endif

#if GUI_QT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
