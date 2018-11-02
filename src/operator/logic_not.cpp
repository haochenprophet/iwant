#include "logic_not.h"
int Clogic_not::my_init(void *p)
{
	this->name = "Clogic_not";
	this->alias = "logic_not";
	this->symbol = "!";
	return 0;
}

Clogic_not::Clogic_not()
{
	this->my_init();
}

Clogic_not::~Clogic_not()
{

}
