#include "feof.h"
int Cfeof::my_init(void *p)
{
	this->name = "Cfeof";
	this->alias = "feof";
	return 0;
}

Cfeof::Cfeof()
{
	this->my_init();
}

Cfeof::~Cfeof()
{

}

#ifndef FEOF_TEST
#define FEOF_TEST 0//1
#endif

#if FEOF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FEOF_TEST\n\n";

	return 0;
}
#endif 