#include "iswdigit.h"
int Ciswdigit::my_init(void *p)
{
	this->name = "Ciswdigit";
	this->alias = "iswdigit";
	return 0;
}

Ciswdigit::Ciswdigit()
{
	this->my_init();
}

Ciswdigit::~Ciswdigit()
{

}

#ifndef ISWDIGIT_TEST
#define ISWDIGIT_TEST 0//1
#endif

#if ISWDIGIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWDIGIT_TEST\n\n";

	return 0;
}
#endif 