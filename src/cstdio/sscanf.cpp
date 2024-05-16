#include "sscanf.h"
#include <stdarg.h>

int Csscanf::my_init(void *p)
{
	this->name = "Csscanf";
	this->alias = "sscanf";
	return 0;
}

Csscanf::Csscanf()
{
	this->my_init();
}

Csscanf::~Csscanf()
{

}

int Csscanf::sscanf_c(const char* s, const char* format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vsscanf(s, format, arg);
	va_end(arg);

	return done;
}

#ifndef SSCANF_TEST
#define SSCANF_TEST 0//1
#endif

#if SSCANF_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SSCANF_TEST\n\n";

	return 0;
}
#endif 