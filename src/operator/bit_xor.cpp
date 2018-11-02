#include "bit_xor.h"
int Cbit_xor::my_init(void *p)
{
	this->name = "Cbit_xor";
	this->alias = "bit_xor";
	this->symbol = "^";
	return 0;
}

Cbit_xor::Cbit_xor()
{
	this->my_init();
}

Cbit_xor::~Cbit_xor()
{

}
