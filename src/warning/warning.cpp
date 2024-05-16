#include "warning.h"
int Cwarning::my_init(void *p)
{
	this->name = "Cwarning";
	this->alias = "warning";
	return 0;
}

Cwarning::Cwarning()
{
	this->my_init();
}

Cwarning::~Cwarning()
{

}

#ifndef WARNING_TEST
#define WARNING_TEST 0//1
#endif

#if WARNING_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WARNING_TEST\n\n";

	return 0;
}
#endif 