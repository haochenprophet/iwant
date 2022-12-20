#include "puts.h"
int Cputs::my_init(void *p)
{
	this->name = "Cputs";
	this->alias = "puts";
	return 0;
}

Cputs::Cputs()
{
	this->my_init();
}

Cputs::~Cputs()
{

}

int Cputs::puts_c(const char* str)
{
	return puts(str);
}

#ifndef PUTS_TEST
#define PUTS_TEST 0//1
#endif

#if PUTS_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "PUTS_TEST\n\n";

	return 0;
}
#endif 