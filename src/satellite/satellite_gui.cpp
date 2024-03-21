#include "satellite_gui.h"
int Csatellite_gui::my_init(void *p)
{
	this->name = "Csatellite_gui";
	this->alias = "satellite_gui";
	return 0;
}

Csatellite_gui::Csatellite_gui()
{
	this->my_init();
}

Csatellite_gui::~Csatellite_gui()
{

}

#ifndef SATELLITE_GUI_TEST
#define SATELLITE_GUI_TEST 0//1
#endif

#if SATELLITE_GUI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
