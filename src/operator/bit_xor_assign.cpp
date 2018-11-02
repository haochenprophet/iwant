#include "bit_xor_assign.h"
int Cbit_xor_assign::my_init(void *p)
{
	this->name = "Cbit_xor_assign";
	this->alias = "bit_xor_assign";
	this->symbol = "^=";
	return 0;
}

Cbit_xor_assign::Cbit_xor_assign()
{
	this->my_init();
}

Cbit_xor_assign::~Cbit_xor_assign()
{

}
