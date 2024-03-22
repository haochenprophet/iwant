#include "code_class.h"
int Ccode_class::my_init(void *p)
{
	this->name = "Ccode_class";
	this->alias = "code_class";
	return 0;
}

Ccode_class::Ccode_class()
{
	this->my_init();
}

Ccode_class::~Ccode_class()
{

}
