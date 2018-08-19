#include "strtol.h"
int Cstrtol::my_init(void *p)
{
	this->name = "Cstrtol";
	this->alias = "strtol";
	return 0;
}

Cstrtol::Cstrtol()
{
	this->my_init();
}

Cstrtol::~Cstrtol()
{

}

#ifndef STRTOL_TEST
#define STRTOL_TEST 0//1
#endif

#if STRTOL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOL_TEST\n\n";

	return 0;
}
#endif 