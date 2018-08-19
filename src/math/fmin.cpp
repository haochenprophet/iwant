#include "fmin.h"
int Cfmin::my_init(void *p)
{
	this->name = "Cfmin";
	this->alias = "fmin";
	return 0;
}

Cfmin::Cfmin()
{
	this->my_init();
}

Cfmin::~Cfmin()
{

}

#ifndef FMIN_TEST
#define FMIN_TEST 0//1
#endif

#if FMIN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FMIN_TEST\n\n";

	return 0;
}
#endif 