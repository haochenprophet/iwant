#include "dynamic_cast_operator.h"
int Cdynamic_cast_operator::my_init(void *p)
{
	this->name = "Cdynamic_cast_operator";
	this->alias = "dynamic_cast_operator";
	return 0;
}

Cdynamic_cast_operator::Cdynamic_cast_operator()
{
	this->my_init();
}

Cdynamic_cast_operator::~Cdynamic_cast_operator()
{

}
