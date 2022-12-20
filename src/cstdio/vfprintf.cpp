#include "vfprintf.h"
int Cvfprintf::my_init(void *p)
{
	this->name = "Cvfprintf";
	this->alias = "vfprintf";
	return 0;
}

Cvfprintf::Cvfprintf()
{
	this->my_init();
}

Cvfprintf::~Cvfprintf()
{

}

int Cvfprintf::vfprintf_c(FILE* stream, const char* format, va_list arg)
{
	return vfprintf(stream, format, arg);
}

#ifndef VFPRINTF_TEST
#define VFPRINTF_TEST 0//1
#endif

#if VFPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VFPRINTF_TEST\n\n";

	return 0;
}
#endif 