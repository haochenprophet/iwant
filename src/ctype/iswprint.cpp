#include "iswprint.h"
int Ciswprint::my_init(void *p)
{
	this->name = "Ciswprint";
	this->alias = "iswprint";
	return 0;
}

Ciswprint::Ciswprint()
{
	this->my_init();
}

Ciswprint::~Ciswprint()
{

}

#ifndef ISWPRINT_TEST
#define ISWPRINT_TEST 0//1
#endif

#if ISWPRINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWPRINT_TEST\n\n";

	return 0;
}
#endif 