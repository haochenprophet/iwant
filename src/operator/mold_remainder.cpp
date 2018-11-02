#include "mold_remainder.h"
int Cmold_remainder::my_init(void *p)
{
	this->name = "Cmold_remainder";
	this->alias = "mold_remainder";
	return 0;
}

Cmold_remainder::Cmold_remainder()
{
	this->my_init();
}

Cmold_remainder::~Cmold_remainder()
{

}
