#include "constexpr.h"
int Cconstexpr::my_init(void *p)
{
	this->name = "Cconstexpr";
	this->alias = "constexpr";
	return 0;
}

Cconstexpr::Cconstexpr()
{
	this->my_init();
}
