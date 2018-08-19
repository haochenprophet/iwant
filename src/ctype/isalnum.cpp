#include "isalnum.h"
int Cisalnum::my_init(void *p)
{
	this->name = "Cisalnum";
	this->alias = "isalnum";
	return 0;
}

Cisalnum::Cisalnum()
{
	this->my_init();
}

Cisalnum::~Cisalnum()
{

}

#ifndef ISALNUM_TEST
#define ISALNUM_TEST 0//1
#endif

#if ISALNUM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISALNUM_TEST\n\n";

	return 0;
}
#endif 