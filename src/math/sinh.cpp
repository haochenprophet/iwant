#include "sinh.h"
int Csinh::my_init(void *p)
{
	this->name = "Csinh";
	this->alias = "sinh";
	return 0;
}

Csinh::Csinh()
{
	this->my_init();
}

Csinh::~Csinh()
{

}

#ifndef SINH_TEST
#define SINH_TEST 0//1
#endif

#if SINH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SINH_TEST\n\n";

	return 0;
}
#endif 