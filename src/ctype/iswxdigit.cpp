#include "iswxdigit.h"
int Ciswxdigit::my_init(void *p)
{
	this->name = "Ciswxdigit";
	this->alias = "iswxdigit";
	return 0;
}

Ciswxdigit::Ciswxdigit()
{
	this->my_init();
}

Ciswxdigit::~Ciswxdigit()
{

}

#ifndef ISWXDIGIT_TEST
#define ISWXDIGIT_TEST 0//1
#endif

#if ISWXDIGIT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWXDIGIT_TEST\n\n";

	return 0;
}
#endif 