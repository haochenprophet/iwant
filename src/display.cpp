#include "display.h"
int Cdisplay::my_init(void *p)
{
	this->name = "Cdisplay";
	this->alias = "display";
	return 0;
}

Cdisplay::Cdisplay()
{
	this->my_init();
}
