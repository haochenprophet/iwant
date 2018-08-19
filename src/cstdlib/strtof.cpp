#include "strtof.h"
int Cstrtof::my_init(void *p)
{
	this->name = "Cstrtof";
	this->alias = "strtof";
	return 0;
}

Cstrtof::Cstrtof()
{
	this->my_init();
}

Cstrtof::~Cstrtof()
{

}

#ifndef STRTOF_TEST
#define STRTOF_TEST 0//1
#endif

#if STRTOF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOF_TEST\n\n";

	return 0;
}
#endif 