#include "atoi.h"
int Catoi::my_init(void *p)
{
	this->name = "Catoi";
	this->alias = "atoi";
	return 0;
}

Catoi::Catoi()
{
	this->my_init();
}

Catoi::~Catoi()
{

}

#ifndef ATOI_TEST
#define ATOI_TEST 0//1
#endif

#if ATOI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATOI_TEST\n\n";

	return 0;
}
#endif 