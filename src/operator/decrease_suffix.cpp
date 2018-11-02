#include "decrease_suffix.h"
int Cdecrease_suffix::my_init(void *p)
{
	this->name = "Cdecrease_suffix";
	this->alias = "decrease_suffix";
	this->symbol = "--";
	return 0;
}

Cdecrease_suffix::Cdecrease_suffix()
{
	this->my_init();
}

Cdecrease_suffix::~Cdecrease_suffix()
{

}
