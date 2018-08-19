#include "labs.h"
int Clabs::my_init(void *p)
{
	this->name = "Clabs";
	this->alias = "labs";
	return 0;
}

Clabs::Clabs()
{
	this->my_init();
}

Clabs::~Clabs()
{

}

#ifndef LABS_TEST
#define LABS_TEST 0//1
#endif

#if LABS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LABS_TEST\n\n";

	return 0;
}
#endif 