#include "iswctype.h"
int Ciswctype::my_init(void *p)
{
	this->name = "Ciswctype";
	this->alias = "iswctype";
	return 0;
}

Ciswctype::Ciswctype()
{
	this->my_init();
}

Ciswctype::~Ciswctype()
{

}

#ifndef ISWCTYPE_TEST
#define ISWCTYPE_TEST 0//1
#endif

#if ISWCTYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWCTYPE_TEST\n\n";

	return 0;
}
#endif 