#include "expressions.h"
int Cexpressions::my_init(void *p)
{
	this->name = "Cexpressions";
	this->alias = "expressions";
	return 0;
}

Cexpressions::Cexpressions()
{
	this->my_init();
}
