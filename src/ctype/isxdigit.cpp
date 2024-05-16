#include "isxdigit.h"
int Cisxdigit::my_init(void *p)
{
	this->name = "Cisxdigit";
	this->alias = "isxdigit";
	return 0;
}

Cisxdigit::Cisxdigit()
{
	this->my_init();
}

Cisxdigit::~Cisxdigit()
{

}

#ifndef ISXDIGIT_TEST
#define ISXDIGIT_TEST 0//1
#endif

#if ISXDIGIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISXDIGIT_TEST\n\n";

	return 0;
}
#endif 