#include "sprintf.h"
int Csprintf::my_init(void *p)
{
	this->name = "Csprintf";
	this->alias = "sprintf";
	return 0;
}

Csprintf::Csprintf()
{
	this->my_init();
}

Csprintf::~Csprintf()
{

}

int Csprintf::sprintf_c(char* str, const char* format, ...)
{
	ERROR_EXIT //should fix sprintf input ... error 
	return sprintf(str,format);
}

#ifndef SPRINTF_TEST
#define SPRINTF_TEST 0//1
#endif

#if SPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SPRINTF_TEST\n\n";

	return 0;
}
#endif 