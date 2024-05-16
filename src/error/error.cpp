#include "error.h"
int Cerror::my_init(void *p)
{
	this->name = "Cerror";
	this->alias = "error";
	return 0;
}

Cerror::Cerror()
{
	this->my_init();
}

Cerror::~Cerror()
{

}

#ifndef ERROR_TEST
#define ERROR_TEST 0//1
#endif

#if ERROR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ERROR_TEST\n\n";

	return 0;
}
#endif 