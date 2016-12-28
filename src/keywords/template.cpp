#include "template.h"
int Ctemplate::my_init(void *p)
{
	this->name = "Ctemplate";
	this->alias = "template";
	return 0;
}

Ctemplate::Ctemplate()
{
	this->my_init();
}
