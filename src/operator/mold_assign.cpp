#include "mold_assign.h"
int Cmold_assign::my_init(void *p)
{
	this->name = "Cmold_assign";
	this->alias = "mold_assign";
	this->symbol = "%=";
	return 0;
}

Cmold_assign::Cmold_assign()
{
	this->my_init();
}

Cmold_assign::~Cmold_assign()
{

}
