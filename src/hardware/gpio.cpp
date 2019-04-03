#include "gpio.h"
int Cgpio::my_init(void *p)
{
	this->name = "Cgpio";
	this->alias = "gpio";
	return 0;
}

Cgpio::Cgpio()
{
	this->my_init();
}

Cgpio::~Cgpio()
{

}

#ifndef GPIO_TEST
#define GPIO_TEST 0//1
#endif

#if GPIO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "GPIO_TEST\n\n";

	return 0;
}
#endif 