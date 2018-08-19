#include "atol.h"
int Catol::my_init(void *p)
{
	this->name = "Catol";
	this->alias = "atol";
	return 0;
}

Catol::Catol()
{
	this->my_init();
}

Catol::~Catol()
{

}

#ifndef ATOL_TEST
#define ATOL_TEST 0//1
#endif

#if ATOL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATOL_TEST\n\n";

	return 0;
}
#endif 