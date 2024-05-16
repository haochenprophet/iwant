#include "snprintf.h"
#include <stdarg.h>

int Csnprintf::my_init(void *p)
{
	this->name = "Csnprintf";
	this->alias = "snprintf";
	return 0;
}

Csnprintf::Csnprintf()
{
	this->my_init();
}

Csnprintf::~Csnprintf()
{

}

int Csnprintf::snprintf_c(char* s, size_t n, const char* format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vsnprintf(s, n, format, arg);
	va_end(arg);

	return done;
}

#ifndef SNPRINTF_TEST
#define SNPRINTF_TEST 0//1
#endif

#if SNPRINTF_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SNPRINTF_TEST\n\n";

	return 0;
}
#endif 