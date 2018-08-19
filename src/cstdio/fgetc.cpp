#include "fgetc.h"
int Cfgetc::my_init(void *p)
{
	this->name = "Cfgetc";
	this->alias = "fgetc";
	return 0;
}

Cfgetc::Cfgetc()
{
	this->my_init();
}

Cfgetc::~Cfgetc()
{

}

#ifndef FGETC_TEST
#define FGETC_TEST 0//1
#endif

#if FGETC_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FGETC_TEST\n\n";

	return 0;
}
#endif 