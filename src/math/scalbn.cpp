#include "scalbn.h"
int Cscalbn::my_init(void *p)
{
	this->name = "Cscalbn";
	this->alias = "scalbn";
	return 0;
}

Cscalbn::Cscalbn()
{
	this->my_init();
}

Cscalbn::~Cscalbn()
{

}

#ifndef SCALBN_TEST
#define SCALBN_TEST 0//1
#endif

#if SCALBN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SCALBN_TEST\n\n";

	return 0;
}
#endif 