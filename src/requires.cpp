#include "requires.h"
int Crequires::my_init(void *p)
{
	this->name = "Crequires";
	this->alias = "requires";
	return 0;
}

Crequires::Crequires()
{
	this->my_init();
}
