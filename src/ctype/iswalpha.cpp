#include "iswalpha.h"
int Ciswalpha::my_init(void *p)
{
	this->name = "Ciswalpha";
	this->alias = "iswalpha";
	return 0;
}

Ciswalpha::Ciswalpha()
{
	this->my_init();
}

Ciswalpha::~Ciswalpha()
{

}

#ifndef ISWALPHA_TEST
#define ISWALPHA_TEST 0//1
#endif

#if ISWALPHA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWALPHA_TEST\n\n";

	return 0;
}
#endif 