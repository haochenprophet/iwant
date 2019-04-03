#include "driver.h"
int Cdriver::my_init(void *p)
{
	this->name = "Cdriver";
	this->alias = "driver";
	return 0;
}

Cdriver::Cdriver()
{
	this->my_init();
}

Cdriver::~Cdriver()
{

}

#ifndef DRIVER_TEST
#define DRIVER_TEST 0//1
#endif

#if DRIVER_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DRIVER_TEST\n\n";

	return 0;
}
#endif 