#include "printf.h"
int Cprintf::my_init(void *p)
{
	this->name = "Cprintf";
	this->alias = "printf";
	return 0;
}

Cprintf::Cprintf()
{
	this->my_init();
}

Cprintf::~Cprintf()
{

}

int Cprintf::printf_c(const char* format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vprintf(format, arg);
	va_end(arg);

	return done;
}

#ifndef PRINTF_TEST
#define PRINTF_TEST 0//1
#endif

#if PRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "PRINTF_TEST\n\n";

	return 0;
}
#endif 