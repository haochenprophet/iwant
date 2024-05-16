#include "atexit.h"
int Catexit::my_init(void *p)
{
	this->name = "Catexit";
	this->alias = "atexit";
	return 0;
}

Catexit::Catexit()
{
	this->my_init();
}

Catexit::~Catexit()
{

}

int Catexit::atexit_c(void (*func)(void))
{
	return atexit(func);
}

#ifndef ATEXIT_TEST
#define ATEXIT_TEST 0//1
#endif

#if ATEXIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATEXIT_TEST\n\n";

	return 0;
}
#endif 