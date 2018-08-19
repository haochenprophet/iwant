#include "strlen.h"
int Cstrlen::my_init(void *p)
{
	this->name = "Cstrlen";
	this->alias = "strlen";
	return 0;
}

Cstrlen::Cstrlen()
{
	this->my_init();
}

Cstrlen::~Cstrlen()
{

}

#ifndef STRLEN_TEST
#define STRLEN_TEST 0//1
#endif

#if STRLEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRLEN_TEST\n\n";

	return 0;
}
#endif 