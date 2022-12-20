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

int Cfscanf::fscanf_c(FILE* stream, const char* format, ...)
{
	ERROR_EXIT //should fix fscanf input ...error 
	return fscanf(stream, format);//code error 
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