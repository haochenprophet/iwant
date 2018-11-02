#include "delete_memory.h"
int Cdelete_memory::my_init(void *p)
{
	this->name = "Cdelete_memory";
	this->alias = "delete_memory";
	this->symbol = "delete";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cdelete_memory::Cdelete_memory()
{
	this->my_init();
}

Cdelete_memory::~Cdelete_memory()
{

}
