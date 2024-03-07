#include "car_gui.h"
int Ccar_gui::my_init(void *p)
{
	this->name = "Ccar_gui";
	this->alias = "car_gui";
	return 0;
}

Ccar_gui::Ccar_gui()
{
	this->my_init();
}

Ccar_gui::~Ccar_gui()
{

}

#ifndef CAR_GUI_TEST
#define CAR_GUI_TEST 0//1
#endif

#if CAR_GUI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
