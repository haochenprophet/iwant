#include "rand.h"
int Crand::my_init(void *p)
{
	this->name = "Crand";
	this->alias = "rand";
	return 0;
}

Crand::Crand()
{
	this->my_init();
}

Crand::~Crand()
{

}
int Crand:: rand_c(void)
{
	return  rand();
}
#ifndef RAND_TEST
#define RAND_TEST 0//1
#endif

#if RAND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "RAND_TEST\n\n";

	return 0;
}
#endif 