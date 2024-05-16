#include "_Exit.h"
int C_Exit::my_init(void *p)
{
	this->name = "C_Exit";
	this->alias = "_Exit";
	return 0;
}

C_Exit::C_Exit()
{
	this->my_init();
}

C_Exit::~C_Exit()
{

}

void C_Exit::_Exit_c(int status)
{
	_Exit(status);
}

#ifndef _EXIT_TEST
#define _EXIT_TEST 0//1
#endif

#if _EXIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "_EXIT_TEST\n\n";

	return 0;
}
#endif 