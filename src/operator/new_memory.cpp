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

#ifndef NEW_MEMORY_TEST
#define NEW_MEMORY_TEST 0//1
#endif

#if NEW_MEMORY_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEW_MEMORY_TEST\n\n";

	return 0;
}
#endif 