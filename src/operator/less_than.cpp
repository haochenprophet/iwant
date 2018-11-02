#include "less_than.h"
int Cless_than::my_init(void *p)
{
	this->name = "Cless_than";
	this->alias = "less_than";
	this->symbol = "<";
	return 0;
}

Cless_than::Cless_than()
{
	this->my_init();
}

Cless_than::~Cless_than()
{

}
