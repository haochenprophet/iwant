#include "scope_operator.h"
int Cscope_operator::my_init(void *p)
{
	this->name = "Cscope_operator";
	this->alias = "scope_operator";
	this->symbol = "::";
	return 0;
}

Cscope_operator::Cscope_operator()
{
	this->my_init();
}

Cscope_operator::~Cscope_operator()
{

}
