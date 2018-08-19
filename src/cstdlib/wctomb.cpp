#include "wctomb.h"
int Cwctomb::my_init(void *p)
{
	this->name = "Cwctomb";
	this->alias = "wctomb";
	return 0;
}

Cwctomb::Cwctomb()
{
	this->my_init();
}

Cwctomb::~Cwctomb()
{

}

#ifndef WCTOMB_TEST
#define WCTOMB_TEST 0//1
#endif

#if WCTOMB_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCTOMB_TEST\n\n";

	return 0;
}
#endif 