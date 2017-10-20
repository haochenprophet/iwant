#include "NOT.h"
int CNOT::my_init(void *p)
{
	this->name = "CNOT";
	this->alias = "NOT";
	return 0;
}

CNOT::CNOT()
{
	this->my_init();
}

CNOT::~CNOT()
{

}
