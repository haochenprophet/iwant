#include "cbrt.h"
int Ccbrt::my_init(void *p)
{
	this->name = "Ccbrt";
	this->alias = "cbrt";
	return 0;
}

Ccbrt::Ccbrt()
{
	this->my_init();
}

Ccbrt::~Ccbrt()
{

}

#ifndef CBRT_TEST
#define CBRT_TEST 0//1
#endif

#if CBRT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CBRT_TEST\n\n";

	return 0;
}
#endif 