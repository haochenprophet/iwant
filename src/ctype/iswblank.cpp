#include "iswblank.h"
int Ciswblank::my_init(void *p)
{
	this->name = "Ciswblank";
	this->alias = "iswblank";
	return 0;
}

Ciswblank::Ciswblank()
{
	this->my_init();
}

Ciswblank::~Ciswblank()
{

}

#ifndef ISWBLANK_TEST
#define ISWBLANK_TEST 0//1
#endif

#if ISWBLANK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWBLANK_TEST\n\n";

	return 0;
}
#endif 