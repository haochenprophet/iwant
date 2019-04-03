#include "io.h"
int Cio::my_init(void *p)
{
	this->name = "Cio";
	this->alias = "io";
	return 0;
}

Cio::Cio()
{
	this->my_init();
}

Cio::~Cio()
{

}

#ifndef IO_TEST
#define IO_TEST 0//1
#endif

#if IO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "IO_TEST\n\n";

	return 0;
}
#endif 