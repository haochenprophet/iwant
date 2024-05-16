#include "iswpunct.h"
int Ciswpunct::my_init(void *p)
{
	this->name = "Ciswpunct";
	this->alias = "iswpunct";
	return 0;
}

Ciswpunct::Ciswpunct()
{
	this->my_init();
}

Ciswpunct::~Ciswpunct()
{

}

#ifndef ISWPUNCT_TEST
#define ISWPUNCT_TEST 0//1
#endif

#if ISWPUNCT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWPUNCT_TEST\n\n";

	return 0;
}
#endif 