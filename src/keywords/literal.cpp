#include "literal.h"
int Cliteral::my_init(void *p)
{
	this->name = "Cliteral";
	this->alias = "literal";
	return 0;
}

Cliteral::Cliteral()
{
	this->my_init();
}
