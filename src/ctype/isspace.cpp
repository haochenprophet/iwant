#include "isspace.h"
int Cisspace::my_init(void *p)
{
	this->name = "Cisspace";
	this->alias = "isspace";
	return 0;
}

Cisspace::Cisspace()
{
	this->my_init();
}

Cisspace::~Cisspace()
{

}

#ifndef ISSPACE_TEST
#define ISSPACE_TEST 0//1
#endif

#if ISSPACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISSPACE_TEST\n\n";

	return 0;
}
#endif 