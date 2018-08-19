#include "cos.h"
int Ccos::my_init(void *p)
{
	this->name = "Ccos";
	this->alias = "cos";
	return 0;
}

Ccos::Ccos()
{
	this->my_init();
}

Ccos::~Ccos()
{

}

#ifndef COS_TEST
#define COS_TEST 0//1
#endif

#if COS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COS_TEST\n\n";

	return 0;
}
#endif 