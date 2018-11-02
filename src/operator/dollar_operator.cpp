#include "dollar_operator.h"
int Cdollar_operator::my_init(void *p)
{
	this->name = "Cdollar_operator";
	this->alias = "dollar_operator";
	return 0;
}

Cdollar_operator::Cdollar_operator()
{
	this->my_init();
}

Cdollar_operator::~Cdollar_operator()
{

}
