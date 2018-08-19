#include "fread.h"
int Cfread::my_init(void *p)
{
	this->name = "Cfread";
	this->alias = "fread";
	return 0;
}

Cfread::Cfread()
{
	this->my_init();
}

Cfread::~Cfread()
{

}

#ifndef FREAD_TEST
#define FREAD_TEST 0//1
#endif

#if FREAD_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FREAD_TEST\n\n";

	return 0;
}
#endif 