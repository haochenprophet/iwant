#include "strrchr.h"
int Cstrrchr::my_init(void *p)
{
	this->name = "Cstrrchr";
	this->alias = "strrchr";
	return 0;
}

Cstrrchr::Cstrrchr()
{
	this->my_init();
}

Cstrrchr::~Cstrrchr()
{

}

#ifndef STRRCHR_TEST
#define STRRCHR_TEST 0//1
#endif

#if STRRCHR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRRCHR_TEST\n\n";

	return 0;
}
#endif 