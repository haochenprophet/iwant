#include "acosh.h"
int Cacosh::my_init(void *p)
{
	this->name = "Cacosh";
	this->alias = "acosh";
	return 0;
}

Cacosh::Cacosh()
{
	this->my_init();
}

Cacosh::~Cacosh()
{

}

#ifndef ACOSH_TEST
#define ACOSH_TEST 0//1
#endif

#if ACOSH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ACOSH_TEST\n\n";

	return 0;
}
#endif 