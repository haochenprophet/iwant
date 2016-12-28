#include "dllexport.h"
int Cdllexport::my_init(void *p)
{
	this->name = "Cdllexport";
	this->alias = "dllexport";
	return 0;
}

Cdllexport::Cdllexport()
{
	this->my_init();
}
