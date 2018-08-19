#include "getchar.h"
int Cgetchar::my_init(void *p)
{
	this->name = "Cgetchar";
	this->alias = "getchar";
	return 0;
}

Cgetchar::Cgetchar()
{
	this->my_init();
}

Cgetchar::~Cgetchar()
{

}

#ifndef GETCHAR_TEST
#define GETCHAR_TEST 0//1
#endif

#if GETCHAR_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "GETCHAR_TEST\n\n";

	return 0;
}
#endif 