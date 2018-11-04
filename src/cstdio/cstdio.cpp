#include "cstdio.h"
int Ccstdio::my_init(void *p)
{
	this->name = "Ccstdio";
	this->alias = "cstdio";
	return 0;
}

Ccstdio::Ccstdio()
{
	this->my_init();
}

Ccstdio::~Ccstdio()
{

}

#ifndef CSTDIO_TEST
#define CSTDIO_TEST 0//1
#endif

#if CSTDIO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CSTDIO_TEST\n\n";

	return 0;
}
#endif 