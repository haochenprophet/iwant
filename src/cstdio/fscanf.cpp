#include "fscanf.h"
int Cfscanf::my_init(void *p)
{
	this->name = "Cfscanf";
	this->alias = "fscanf";
	return 0;
}

Cfscanf::Cfscanf()
{
	this->my_init();
}

Cfscanf::~Cfscanf()
{

}

#ifndef FSCANF_TEST
#define FSCANF_TEST 0//1
#endif

#if FSCANF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FSCANF_TEST\n\n";

	return 0;
}
#endif 