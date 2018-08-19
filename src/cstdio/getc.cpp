#include "getc.h"
int Cgetc::my_init(void *p)
{
	this->name = "Cgetc";
	this->alias = "getc";
	return 0;
}

Cgetc::Cgetc()
{
	this->my_init();
}

Cgetc::~Cgetc()
{

}

#ifndef GETC_TEST
#define GETC_TEST 0//1
#endif

#if GETC_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "GETC_TEST\n\n";

	return 0;
}
#endif 