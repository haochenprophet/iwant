#include "assign_direct.h"
int Cassign_direct::my_init(void *p)
{
	this->name = "Cassign_direct";
	this->alias = "assign_direct";
	this->symbol = "=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cassign_direct::Cassign_direct()
{
	this->my_init();
}

Cassign_direct::~Cassign_direct()
{

}

#ifndef ASSIGN_DIRECT_TEST
#define ASSIGN_DIRECT_TEST 0//1
#endif

#if ASSIGN_DIRECT_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ASSIGN_DIRECT_TEST\n\n";

	return 0;
}
#endif 