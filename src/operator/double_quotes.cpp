#include "double_quotes.h"
int Cdouble_quotes::my_init(void *p)
{
	this->name = "Cdouble_quotes";
	this->alias = "double_quotes";
	this->symbol = "\"...\"";

	return 0;
}

Cdouble_quotes::Cdouble_quotes()
{
	this->my_init();
}

Cdouble_quotes::~Cdouble_quotes()
{

}
