#include "get.h"
int Cget::my_init(void *p)
{
	this->name = "Cget";
	this->alias = "get";
	return 0;
}

Cget::Cget()
{
	this->my_init();
}

#ifndef GET_TEST
#define GET_TEST 0//1
#endif

#if GET_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "GET_TEST\n\n";

	return 0;
}
#endif 