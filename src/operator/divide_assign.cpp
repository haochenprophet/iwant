#include "divide_assign.h"
int Cdivide_assign::my_init(void *p)
{
	this->name = "Cdivide_assign";
	this->alias = "divide_assign";
	this->symbol = "/=";
	return 0;
}

Cdivide_assign::Cdivide_assign()
{
	this->my_init();
}

Cdivide_assign::~Cdivide_assign()
{

}
