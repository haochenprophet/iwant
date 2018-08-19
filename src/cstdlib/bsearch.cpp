#include "bsearch.h"
int Cbsearch::my_init(void *p)
{
	this->name = "Cbsearch";
	this->alias = "bsearch";
	return 0;
}

Cbsearch::Cbsearch()
{
	this->my_init();
}

Cbsearch::~Cbsearch()
{

}

#ifndef BSEARCH_TEST
#define BSEARCH_TEST 0//1
#endif

#if BSEARCH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BSEARCH_TEST\n\n";

	return 0;
}
#endif 