#include "clearerr.h"
int Cclearerr::my_init(void *p)
{
	this->name = "Cclearerr";
	this->alias = "clearerr";
	return 0;
}

Cclearerr::Cclearerr()
{
	this->my_init();
}

Cclearerr::~Cclearerr()
{

}

#ifndef CLEARERR_TEST
#define CLEARERR_TEST 0//1
#endif

#if CLEARERR_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "CLEARERR_TEST\n\n";

	return 0;
}
#endif 