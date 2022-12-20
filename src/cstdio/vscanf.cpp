#include "vscanf.h"
int Cvscanf::my_init(void *p)
{
	this->name = "Cvscanf";
	this->alias = "vscanf";
	return 0;
}

Cvscanf::Cvscanf()
{
	this->my_init();
}

Cvscanf::~Cvscanf()
{

}

int Cvscanf::vscanf_c(const char* format, va_list arg)
{
	return vscanf(format,arg);
}

#ifndef VSCANF_TEST
#define VSCANF_TEST 0//1
#endif

#if VSCANF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "VSCANF_TEST\n\n";

	return 0;
}
#endif 