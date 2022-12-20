#include "vsnprintf.h"
int Cvsnprintf::my_init(void *p)
{
	this->name = "Cvsnprintf";
	this->alias = "vsnprintf";
	return 0;
}

Cvsnprintf::Cvsnprintf()
{
	this->my_init();
}

Cvsnprintf::~Cvsnprintf()
{

}

int Cvsnprintf::vsnprintf_c(char* s, size_t n, const char* format, va_list arg)
{
	return vsnprintf(s, n, format,  arg);
}

#ifndef VSNPRINTF_TEST
#define VSNPRINTF_TEST 0//1
#endif

#if VSNPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VSNPRINTF_TEST\n\n";

	return 0;
}
#endif 