#include "vsprintf.h"
int Cvsprintf::my_init(void *p)
{
	this->name = "Cvsprintf";
	this->alias = "vsprintf";
	return 0;
}

Cvsprintf::Cvsprintf()
{
	this->my_init();
}

Cvsprintf::~Cvsprintf()
{

}

#ifndef VSPRINTF_TEST
#define VSPRINTF_TEST 0//1
#endif

#if VSPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VSPRINTF_TEST\n\n";

	return 0;
}
#endif 