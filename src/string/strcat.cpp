#include "strcat.h"
int Cstrcat::my_init(void *p)
{
	this->name = "Cstrcat";
	this->alias = "strcat";
	return 0;
}

Cstrcat::Cstrcat()
{
	this->my_init();
}

Cstrcat::~Cstrcat()
{

}

#ifndef STRCAT_TEST
#define STRCAT_TEST 0//1
#endif

#if STRCAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCAT_TEST\n\n";

	return 0;
}
#endif 