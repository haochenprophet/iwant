#include "cstdlib.h"
int Ccstdlib::my_init(void *p)
{
	this->name = "Ccstdlib";
	this->alias = "cstdlib";
	return 0;
}

Ccstdlib::Ccstdlib()
{
	this->my_init();
}

Ccstdlib::~Ccstdlib()
{

}

#ifndef CSTDLIB_TEST
#define CSTDLIB_TEST 0//1
#endif

#if CSTDLIB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CSTDLIB_TEST\n\n";

	return 0;
}
#endif 