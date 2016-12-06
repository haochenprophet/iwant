#include "dllimport.h"
int Cdllimport::my_init(void *p)
{
	this->name = "Cdllimport";
	this->alias = "dllimport";
	return 0;
}

Cdllimport::Cdllimport()
{
	this->my_init();
}
