#include "remainder.h"
int Cremainder::my_init(void *p)
{
	this->name = "Cremainder";
	this->alias = "remainder";
	return 0;
}

Cremainder::Cremainder()
{
	this->my_init();
}

Cremainder::~Cremainder()
{

}

#ifndef REMAINDER_TEST
#define REMAINDER_TEST 0//1
#endif

#if REMAINDER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REMAINDER_TEST\n\n";

	return 0;
}
#endif 