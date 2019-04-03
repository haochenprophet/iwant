#include "register.h"
int Cregister::my_init(void *p)
{
	this->name = "Cregister";
	this->alias = "register";
	return 0;
}

Cregister::Cregister()
{
	this->my_init();
}

Cregister::~Cregister()
{

}

#ifndef REGISTER_TEST
#define REGISTER_TEST 0//1
#endif

#if REGISTER_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REGISTER_TEST\n\n";

	return 0;
}
#endif 