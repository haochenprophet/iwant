#include "strstr.h"
int Cstrstr::my_init(void *p)
{
	this->name = "Cstrstr";
	this->alias = "strstr";
	return 0;
}

Cstrstr::Cstrstr()
{
	this->my_init();
}

Cstrstr::~Cstrstr()
{

}

#ifndef STRSTR_TEST
#define STRSTR_TEST 0//1
#endif

#if STRSTR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRSTR_TEST\n\n";

	return 0;
}
#endif 