#include "strcspn.h"
int Cstrcspn::my_init(void *p)
{
	this->name = "Cstrcspn";
	this->alias = "strcspn";
	return 0;
}

Cstrcspn::Cstrcspn()
{
	this->my_init();
}

Cstrcspn::~Cstrcspn()
{

}

#ifndef STRCSPN_TEST
#define STRCSPN_TEST 0//1
#endif

#if STRCSPN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCSPN_TEST\n\n";

	return 0;
}
#endif 