#include "sub_assign.h"
int Csub_assign::my_init(void *p)
{
	this->name = "Csub_assign";
	this->alias = "sub_assign";
	this->symbol = "-=";
	return 0;
}

Csub_assign::Csub_assign()
{
	this->my_init();
}

Csub_assign::~Csub_assign()
{

}
