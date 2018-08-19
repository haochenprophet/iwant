#include "trunc.h"
int Ctrunc::my_init(void *p)
{
	this->name = "Ctrunc";
	this->alias = "trunc";
	return 0;
}

Ctrunc::Ctrunc()
{
	this->my_init();
}

Ctrunc::~Ctrunc()
{

}

#ifndef TRUNC_TEST
#define TRUNC_TEST 0//1
#endif

#if TRUNC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TRUNC_TEST\n\n";

	return 0;
}
#endif 