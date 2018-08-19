#include "fopen.h"
int Cfopen::my_init(void *p)
{
	this->name = "Cfopen";
	this->alias = "fopen";
	return 0;
}

Cfopen::Cfopen()
{
	this->my_init();
}

Cfopen::~Cfopen()
{

}

#ifndef FOPEN_TEST
#define FOPEN_TEST 0//1
#endif

#if FOPEN_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FOPEN_TEST\n\n";

	return 0;
}
#endif 