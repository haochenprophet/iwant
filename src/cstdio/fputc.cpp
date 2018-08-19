#include "fputc.h"
int Cfputc::my_init(void *p)
{
	this->name = "Cfputc";
	this->alias = "fputc";
	return 0;
}

Cfputc::Cfputc()
{
	this->my_init();
}

Cfputc::~Cfputc()
{

}

#ifndef FPUTC_TEST
#define FPUTC_TEST 0//1
#endif

#if FPUTC_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FPUTC_TEST\n\n";

	return 0;
}
#endif 