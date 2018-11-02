#include "new_memory.h"
int Cnew_memory::my_init(void *p)
{
	this->name = "Cnew_memory";
	this->alias = "new_memory";
	this->symbol = "new";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cnew_memory::Cnew_memory()
{
	this->my_init();
}

Cnew_memory::~Cnew_memory()
{

}
