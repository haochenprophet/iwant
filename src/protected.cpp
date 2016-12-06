#include "protected.h"
int Cprotected::my_init(void *p)
{
	this->name = "Cprotected";
	this->alias = "protected";
	return 0;
}

Cprotected::Cprotected()
{
	this->my_init();
}
