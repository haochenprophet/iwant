#include "register_hw.h"
int Cregister_hw::my_init(void *p)
{
	this->name = "Cregister_hw";
	this->alias = "register_hw";
	return 0;
}

Cregister_hw::Cregister_hw()
{
	this->my_init();
}

Cregister_hw::~Cregister_hw()
{

}

#ifndef REGISTER_HW_TEST
#define REGISTER_HW_TEST 0//1
#endif

#if REGISTER_HW_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REGISTER_HW_TEST\n\n";

	return 0;
}
#endif 