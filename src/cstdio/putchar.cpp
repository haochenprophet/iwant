#include "putchar.h"
int Cputchar::my_init(void *p)
{
	this->name = "Cputchar";
	this->alias = "putchar";
	return 0;
}

Cputchar::Cputchar()
{
	this->my_init();
}

Cputchar::~Cputchar()
{

}

int Cputchar::putchar_c(int character)
{
	return putchar(character);
}

#ifndef PUTCHAR_TEST
#define PUTCHAR_TEST 0//1
#endif

#if PUTCHAR_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "PUTCHAR_TEST\n\n";

	return 0;
}
#endif 