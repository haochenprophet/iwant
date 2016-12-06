#include "clone.h"
int Cclone::my_init(void *p)
{
	this->name = "Cclone";
	this->alias = "clone";
	return 0;
}

Cclone::Cclone()
{
	this->my_init();
}
