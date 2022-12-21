#include "scanf.h"
int Cscanf::my_init(void *p)
{
	this->name = "Cscanf";
	this->alias = "scanf";
	return 0;
}

Cscanf::Cscanf()
{
	this->my_init();
}

Cscanf::~Cscanf()
{

}

int Cscanf::scanf_c(const char* format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vscanf(format, arg);
	va_end(arg);

	return done;
}

#ifndef SCANF_TEST
#define SCANF_TEST 0//1
#endif

#if SCANF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SCANF_TEST\n\n";

	return 0;
}
#endif 