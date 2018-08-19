#include "towlower.h"
int Ctowlower::my_init(void *p)
{
	this->name = "Ctowlower";
	this->alias = "towlower";
	return 0;
}

Ctowlower::Ctowlower()
{
	this->my_init();
}

Ctowlower::~Ctowlower()
{

}

#ifndef TOWLOWER_TEST
#define TOWLOWER_TEST 0//1
#endif

#if TOWLOWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TOWLOWER_TEST\n\n";

	return 0;
}
#endif 