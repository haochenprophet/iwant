#include "atof.h"
int Catof::my_init(void *p)
{
	this->name = "Catof";
	this->alias = "atof";
	return 0;
}

Catof::Catof()
{
	this->my_init();
}

Catof::~Catof()
{

}

double Catof::atof_c(const char* str)
{
	return atof(str);
}

#ifndef ATOF_TEST
#define ATOF_TEST 0//1
#endif

#if ATOF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATOF_TEST\n\n";

	return 0;
}
#endif 