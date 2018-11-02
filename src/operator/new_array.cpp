#include "new_array.h"
int Cnew_array::my_init(void *p)
{
	this->name = "Cnew_array";
	this->alias = "new_array";
	this->symbol = "new []";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cnew_array::Cnew_array()
{
	this->my_init();
}

Cnew_array::~Cnew_array()
{

}

#ifndef NEW_ARRAY_TEST
#define NEW_ARRAY_TEST 0//1
#endif

#if NEW_ARRAY_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEW_ARRAY_TEST\n\n";

	return 0;
}
#endif 