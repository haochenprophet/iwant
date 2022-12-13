#include "clock.h"
int Cclock::my_init(void *p)
{
	this->name = "Cclock";
	this->alias = "clock";
	return 0;
}

Cclock::Cclock()
{
	this->my_init();
}

Cclock::~Cclock()
{

}

clock_t Cclock::clock_c(void)
{
	return clock();
}

#ifndef CLOCK_TEST
#define CLOCK_TEST 0//1
#endif

#if CLOCK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CLOCK_TEST\n\n";

	return 0;
}
#endif 