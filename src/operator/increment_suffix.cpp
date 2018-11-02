#include "increment_suffix.h"
int Cincrement_suffix::my_init(void *p)
{
	this->name = "Cincrement_suffix";
	this->alias = "increment_suffix";
	this->symbol = "++";
	return 0;
}

Cincrement_suffix::Cincrement_suffix()
{
	this->my_init();
}

Cincrement_suffix::~Cincrement_suffix()
{

}
