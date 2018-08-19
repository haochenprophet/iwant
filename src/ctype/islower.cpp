#include "islower.h"
int Cislower::my_init(void *p)
{
	this->name = "Cislower";
	this->alias = "islower";
	return 0;
}

Cislower::Cislower()
{
	this->my_init();
}

Cislower::~Cislower()
{

}

#ifndef ISLOWER_TEST
#define ISLOWER_TEST 0//1
#endif

#if ISLOWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISLOWER_TEST\n\n";

	return 0;
}
#endif 