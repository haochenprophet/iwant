#include "delete_array.h"
int Cdelete_array::my_init(void *p)
{
	this->name = "Cdelete_array";
	this->alias = "delete_array";
	this->symbol = "delete []";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cdelete_array::Cdelete_array()
{
	this->my_init();
}

Cdelete_array::~Cdelete_array()
{

}

#ifndef DELETE_ARRAY_TEST
#define DELETE_ARRAY_TEST 0//1
#endif

#if DELETE_ARRAY_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DELETE_ARRAY_TEST\n\n";

	return 0;
}
#endif 