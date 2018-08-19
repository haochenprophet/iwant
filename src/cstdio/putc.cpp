#include "putc.h"
int Cputc::my_init(void *p)
{
	this->name = "Cputc";
	this->alias = "putc";
	return 0;
}

Cputc::Cputc()
{
	this->my_init();
}

Cputc::~Cputc()
{

}

#ifndef PUTC_TEST
#define PUTC_TEST 0//1
#endif

#if PUTC_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "PUTC_TEST\n\n";

	return 0;
}
#endif 