#include "not_equal.h"
int Cnot_equal::my_init(void *p)
{
	this->name = "Cnot_equal";
	this->alias = "not_equal";
	this->symbol = "!=";
	return 0;
}

Cnot_equal::Cnot_equal()
{
	this->my_init();
}

Cnot_equal::~Cnot_equal()
{

}
