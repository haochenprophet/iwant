#include "at_operator.h"
int Cat_operator::my_init(void *p)
{
	this->name = "Cat_operator";
	this->alias = "at_operator";
	this->symbol = "@";
	return 0;
}

Cat_operator::Cat_operator()
{
	this->my_init();
}

Cat_operator::~Cat_operator()
{

}
