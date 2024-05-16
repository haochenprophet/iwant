#include "strchr.h"
int Cstrchr::my_init(void *p)
{
	this->name = "Cstrchr";
	this->alias = "strchr";
	return 0;
}

Cstrchr::Cstrchr()
{
	this->my_init();
}

Cstrchr::~Cstrchr()
{

}

#ifndef STRCHR_TEST
#define STRCHR_TEST 0//1
#endif

#if STRCHR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCHR_TEST\n\n";

	return 0;
}
#endif 