#include "comma_operator.h"
int Ccomma_operator::my_init(void *p)
{
	this->name = "Ccomma_operator";
	this->alias = "comma_operator";
	this->symbol = ",";
	return 0;
}

Ccomma_operator::Ccomma_operator()
{
	this->my_init();
}

Ccomma_operator::~Ccomma_operator()
{

}
