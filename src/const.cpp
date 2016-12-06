#include "const.h"
int Cconst::my_init(void *p)
{
	this->name = "Cconst";
	this->alias = "const";
	return 0;
}

Cconst::Cconst()
{
	this->my_init();
}
