#include "end_operator.h"
int Cend_operator::my_init(void *p)
{
	this->name = "Cend_operator";
	this->alias = "end_operator";
	this->symbol = "";
	return 0;
}

Cend_operator::Cend_operator()
{
	this->my_init();
}

Cend_operator::~Cend_operator()
{

}
