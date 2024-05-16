#include "strncat.h"
int Cstrncat::my_init(void *p)
{
	this->name = "Cstrncat";
	this->alias = "strncat";
	return 0;
}

Cstrncat::Cstrncat()
{
	this->my_init();
}

Cstrncat::~Cstrncat()
{

}

#ifndef STRNCAT_TEST
#define STRNCAT_TEST 0//1
#endif

#if STRNCAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRNCAT_TEST\n\n";

	return 0;
}
#endif 