#include "func.h"
int Cfunc::my_init(void *p)
{
	this->name = "Cfunc";
	this->alias = "func";
	return 0;
}

Cfunc::Cfunc()
{
	this->my_init();
}

Cfunc::~Cfunc()
{

}
