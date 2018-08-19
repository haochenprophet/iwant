#include "iswlower.h"
int Ciswlower::my_init(void *p)
{
	this->name = "Ciswlower";
	this->alias = "iswlower";
	return 0;
}

Ciswlower::Ciswlower()
{
	this->my_init();
}

Ciswlower::~Ciswlower()
{

}

#ifndef ISWLOWER_TEST
#define ISWLOWER_TEST 0//1
#endif

#if ISWLOWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWLOWER_TEST\n\n";

	return 0;
}
#endif 