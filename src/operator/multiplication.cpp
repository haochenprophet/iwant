#include "multiplication.h"
int Cmultiplication::my_init(void *p)
{
	this->name = "Cmultiplication";
	this->alias = "multiplication";
	this->symbol = "*";
	this->op_priority = 5;
	this->combination = Combination::L2R;
	return 0;
}

Cmultiplication::Cmultiplication()
{
	this->my_init();
}

Cmultiplication::~Cmultiplication()
{

}
