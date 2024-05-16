#include "iswspace.h"
int Ciswspace::my_init(void *p)
{
	this->name = "Ciswspace";
	this->alias = "iswspace";
	return 0;
}

Ciswspace::Ciswspace()
{
	this->my_init();
}

Ciswspace::~Ciswspace()
{

}

#ifndef ISWSPACE_TEST
#define ISWSPACE_TEST 0//1
#endif

#if ISWSPACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWSPACE_TEST\n\n";

	return 0;
}
#endif 