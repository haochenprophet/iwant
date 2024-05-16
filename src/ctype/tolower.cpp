#include "tolower.h"
int Ctolower::my_init(void *p)
{
	this->name = "Ctolower";
	this->alias = "tolower";
	return 0;
}

Ctolower::Ctolower()
{
	this->my_init();
}

Ctolower::~Ctolower()
{

}

#ifndef TOLOWER_TEST
#define TOLOWER_TEST 0//1
#endif

#if TOLOWER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TOLOWER_TEST\n\n";

	return 0;
}
#endif 