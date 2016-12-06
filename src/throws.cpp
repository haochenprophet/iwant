#include "throws.h"
int Cthrows::my_init(void *p)
{
	this->name = "Cthrows";
	this->alias = "throws";
	return 0;
}

Cthrows::Cthrows()
{
	this->my_init();
}
