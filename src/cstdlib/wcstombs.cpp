#include "wcstombs.h"
int Cwcstombs::my_init(void *p)
{
	this->name = "Cwcstombs";
	this->alias = "wcstombs";
	return 0;
}

Cwcstombs::Cwcstombs()
{
	this->my_init();
}

Cwcstombs::~Cwcstombs()
{

}

#ifndef WCSTOMBS_TEST
#define WCSTOMBS_TEST 0//1
#endif

#if WCSTOMBS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCSTOMBS_TEST\n\n";

	return 0;
}
#endif 