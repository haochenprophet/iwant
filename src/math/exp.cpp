#include "exp.h"
int Cexp::my_init(void *p)
{
	this->name = "Cexp";
	this->alias = "exp";
	return 0;
}

Cexp::Cexp()
{
	this->my_init();
}

Cexp::~Cexp()
{

}

#ifndef EXP_TEST
#define EXP_TEST 0//1
#endif

#if EXP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EXP_TEST\n\n";

	return 0;
}
#endif 