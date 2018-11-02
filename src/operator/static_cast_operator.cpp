#include "static_cast_operator.h"
int Cstatic_cast_operator::my_init(void *p)
{
	this->name = "Cstatic_cast_operator";
	this->alias = "static_cast_operator";
	return 0;
}

Cstatic_cast_operator::Cstatic_cast_operator()
{
	this->my_init();
}

Cstatic_cast_operator::~Cstatic_cast_operator()
{

}
