#include "strspn.h"
int Cstrspn::my_init(void *p)
{
	this->name = "Cstrspn";
	this->alias = "strspn";
	return 0;
}

Cstrspn::Cstrspn()
{
	this->my_init();
}

Cstrspn::~Cstrspn()
{

}

#ifndef STRSPN_TEST
#define STRSPN_TEST 0//1
#endif

#if STRSPN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRSPN_TEST\n\n";

	return 0;
}
#endif 