#include "dereference_operator.h"
int Cdereference_operator::my_init(void *p)
{
	this->name = "Cdereference_operator";
	this->alias = "dereference_operator";
	return 0;
}

Cdereference_operator::Cdereference_operator()
{
	this->my_init();
}

Cdereference_operator::~Cdereference_operator()
{

}
