#include "wctype.h"
int Cwctype::my_init(void *p)
{
	this->name = "Cwctype";
	this->alias = "wctype";
	return 0;
}

Cwctype::Cwctype()
{
	this->my_init();
}

Cwctype::~Cwctype()
{

}

#ifndef WCTYPE_TEST
#define WCTYPE_TEST 0//1
#endif

#if WCTYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCTYPE_TEST\n\n";

	return 0;
}
#endif 