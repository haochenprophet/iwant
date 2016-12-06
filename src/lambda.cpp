#include "lambda.h"
int Clambda::my_init(void *p)
{
	this->name = "Clambda";
	this->alias = "lambda";
	return 0;
}

Clambda::Clambda()
{
	this->my_init();
}
