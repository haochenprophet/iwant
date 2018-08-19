#include "iswcntrl.h"
int Ciswcntrl::my_init(void *p)
{
	this->name = "Ciswcntrl";
	this->alias = "iswcntrl";
	return 0;
}

Ciswcntrl::Ciswcntrl()
{
	this->my_init();
}

Ciswcntrl::~Ciswcntrl()
{

}

#ifndef ISWCNTRL_TEST
#define ISWCNTRL_TEST 0//1
#endif

#if ISWCNTRL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWCNTRL_TEST\n\n";

	return 0;
}
#endif 