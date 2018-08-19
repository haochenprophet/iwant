#include "isalpha.h"
int Cisalpha::my_init(void *p)
{
	this->name = "Cisalpha";
	this->alias = "isalpha";
	return 0;
}

Cisalpha::Cisalpha()
{
	this->my_init();
}

Cisalpha::~Cisalpha()
{

}

#ifndef ISALPHA_TEST
#define ISALPHA_TEST 0//1
#endif

#if ISALPHA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISALPHA_TEST\n\n";

	return 0;
}
#endif 