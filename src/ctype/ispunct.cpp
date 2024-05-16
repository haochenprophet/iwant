#include "ispunct.h"
int Cispunct::my_init(void *p)
{
	this->name = "Cispunct";
	this->alias = "ispunct";
	return 0;
}

Cispunct::Cispunct()
{
	this->my_init();
}

Cispunct::~Cispunct()
{

}

#ifndef ISPUNCT_TEST
#define ISPUNCT_TEST 0//1
#endif

#if ISPUNCT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISPUNCT_TEST\n\n";

	return 0;
}
#endif 