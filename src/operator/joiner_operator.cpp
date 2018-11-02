#include "joiner_operator.h"
int Cjoiner_operator::my_init(void *p)
{
	this->name = "Cjoiner_operator";
	this->alias = "joiner_operator";
	this->symbol = "\";
	return 0;
}

Cjoiner_operator::Cjoiner_operator()
{
	this->my_init();
}

Cjoiner_operator::~Cjoiner_operator()
{

}
