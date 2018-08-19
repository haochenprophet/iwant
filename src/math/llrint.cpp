#include "llrint.h"
int Cllrint::my_init(void *p)
{
	this->name = "Cllrint";
	this->alias = "llrint";
	return 0;
}

Cllrint::Cllrint()
{
	this->my_init();
}

Cllrint::~Cllrint()
{

}

#ifndef LLRINT_TEST
#define LLRINT_TEST 0//1
#endif

#if LLRINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LLRINT_TEST\n\n";

	return 0;
}
#endif 