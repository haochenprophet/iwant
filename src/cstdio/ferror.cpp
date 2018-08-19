#include "ferror.h"
int Cferror::my_init(void *p)
{
	this->name = "Cferror";
	this->alias = "ferror";
	return 0;
}

Cferror::Cferror()
{
	this->my_init();
}

Cferror::~Cferror()
{

}

#ifndef FERROR_TEST
#define FERROR_TEST 0//1
#endif

#if FERROR_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FERROR_TEST\n\n";

	return 0;
}
#endif 