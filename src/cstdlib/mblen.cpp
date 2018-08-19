#include "mblen.h"
int Cmblen::my_init(void *p)
{
	this->name = "Cmblen";
	this->alias = "mblen";
	return 0;
}

Cmblen::Cmblen()
{
	this->my_init();
}

Cmblen::~Cmblen()
{

}

#ifndef MBLEN_TEST
#define MBLEN_TEST 0//1
#endif

#if MBLEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MBLEN_TEST\n\n";

	return 0;
}
#endif 