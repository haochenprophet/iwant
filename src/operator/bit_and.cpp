#include "bit_and.h"
int Cbit_and::my_init(void *p)
{
	this->name = "Cbit_and";
	this->alias = "bit_and";
	this->symbol = "&";
	this->op_priority = 10;
	this->combination = Combination::L2R;
	return 0;
}

Cbit_and::Cbit_and()
{
	this->my_init();
}

Cbit_and::~Cbit_and()
{

}
