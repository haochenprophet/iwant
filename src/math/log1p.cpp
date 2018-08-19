#include "log1p.h"
int Clog1p::my_init(void *p)
{
	this->name = "Clog1p";
	this->alias = "log1p";
	return 0;
}

Clog1p::Clog1p()
{
	this->my_init();
}

Clog1p::~Clog1p()
{

}

#ifndef LOG1P_TEST
#define LOG1P_TEST 0//1
#endif

#if LOG1P_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOG1P_TEST\n\n";

	return 0;
}
#endif 