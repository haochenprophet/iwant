#include "bus.h"
int Cbus::my_init(void *p)
{
	this->name = "Cbus";
	this->alias = "bus";
	return 0;
}

Cbus::Cbus()
{
	this->my_init();
}

Cbus::~Cbus()
{

}

#ifndef BUS_TEST
#define BUS_TEST 0//1
#endif

#if BUS_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BUS_TEST\n\n";

	return 0;
}
#endif 