#include "vsscanf.h"
int Cvsscanf::my_init(void *p)
{
	this->name = "Cvsscanf";
	this->alias = "vsscanf";
	return 0;
}

Cvsscanf::Cvsscanf()
{
	this->my_init();
}

Cvsscanf::~Cvsscanf()
{

}

#ifndef VSSCANF_TEST
#define VSSCANF_TEST 0//1
#endif

#if VSSCANF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VSSCANF_TEST\n\n";

	return 0;
}
#endif 