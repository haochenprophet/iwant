#include "isprint.h"
int Cisprint::my_init(void *p)
{
	this->name = "Cisprint";
	this->alias = "isprint";
	return 0;
}

Cisprint::Cisprint()
{
	this->my_init();
}

Cisprint::~Cisprint()
{

}

#ifndef ISPRINT_TEST
#define ISPRINT_TEST 0//1
#endif

#if ISPRINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISPRINT_TEST\n\n";

	return 0;
}
#endif 