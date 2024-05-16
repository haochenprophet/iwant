#include "iswalnum.h"
int Ciswalnum::my_init(void *p)
{
	this->name = "Ciswalnum";
	this->alias = "iswalnum";
	return 0;
}

Ciswalnum::Ciswalnum()
{
	this->my_init();
}

Ciswalnum::~Ciswalnum()
{

}

#ifndef ISWALNUM_TEST
#define ISWALNUM_TEST 0//1
#endif

#if ISWALNUM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWALNUM_TEST\n\n";

	return 0;
}
#endif 