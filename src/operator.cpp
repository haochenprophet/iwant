#include "Operator.h"
int COperator::my_init(void *p)
{
	this->name = "COperator";
	this->alias = "Operator";
	return 0;
}

COperator::COperator()
{
	this->my_init();
}
