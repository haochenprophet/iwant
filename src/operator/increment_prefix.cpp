#include "increment_prefix.h"
int Cincrement_prefix::my_init(void *p)
{
	this->name = "Cincrement_prefix";
	this->alias = "increment_prefix";
	this->symbol = "++";
	return 0;
}

Cincrement_prefix::Cincrement_prefix()
{
	this->my_init();
}

Cincrement_prefix::~Cincrement_prefix()
{

}
