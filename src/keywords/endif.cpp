#include "endif.h"
int Cendif::my_init(void *p)
{
	this->name = "Cendif";
	this->alias = "endif";
	return 0;
}

Cendif::Cendif()
{
	this->my_init();
}
