#include "fprintf.h"
int Cfprintf::my_init(void *p)
{
	this->name = "Cfprintf";
	this->alias = "fprintf";
	return 0;
}

Cfprintf::Cfprintf()
{
	this->my_init();
}

Cfprintf::~Cfprintf()
{

}

#ifndef FPRINTF_TEST
#define FPRINTF_TEST 0//1
#endif

#if FPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FPRINTF_TEST\n\n";

	return 0;
}
#endif 