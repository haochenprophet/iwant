#include "logic_and.h"
int Clogic_and::my_init(void *p)
{
	this->name = "Clogic_and";
	this->alias = "logic_and";
	this->symbol = "&&";
	return 0;
}

Clogic_and::Clogic_and()
{
	this->my_init();
}

Clogic_and::~Clogic_and()
{

}
