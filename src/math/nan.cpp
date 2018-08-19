#include "nan.h"
int Cnan::my_init(void *p)
{
	this->name = "Cnan";
	this->alias = "nan";
	return 0;
}

Cnan::Cnan()
{
	this->my_init();
}

Cnan::~Cnan()
{

}

#ifndef NAN_TEST
#define NAN_TEST 0//1
#endif

#if NAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NAN_TEST\n\n";

	return 0;
}
#endif 