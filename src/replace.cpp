#include "replace.h"
int Creplace::my_init(void *p)
{
	this->name = "Creplace";
	this->alias = "replace";
	return 0;
}

Creplace::Creplace()
{
	this->my_init();
}

Creplace::~Creplace()
{

}

#ifndef REPLACE_TEST
#define REPLACE_TEST 0//1
#endif

#if REPLACE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REPLACE_TEST\n\n";

	return 0;
}
#endif 