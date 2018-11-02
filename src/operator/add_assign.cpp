#include "add_assign.h"
int Cadd_assign::my_init(void *p)
{
	this->name = "Cadd_assign";
	this->alias = "add_assign";
	this->symbol = "+=";
	return 0;
}

Cadd_assign::Cadd_assign()
{
	this->my_init();
}

Cadd_assign::~Cadd_assign()
{

}
