#include "copysign.h"
int Ccopysign::my_init(void *p)
{
	this->name = "Ccopysign";
	this->alias = "copysign";
	return 0;
}

Ccopysign::Ccopysign()
{
	this->my_init();
}

Ccopysign::~Ccopysign()
{

}

#ifndef COPYSIGN_TEST
#define COPYSIGN_TEST 0//1
#endif

#if COPYSIGN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COPYSIGN_TEST\n\n";

	return 0;
}
#endif 