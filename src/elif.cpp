#include "elif.h"
int Celif::my_init(void *p)
{
	this->name = "Celif";
	this->alias = "elif";
	return 0;
}

Celif::Celif()
{
	this->my_init();
}
