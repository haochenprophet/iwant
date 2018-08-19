#include "freopen.h"
int Cfreopen::my_init(void *p)
{
	this->name = "Cfreopen";
	this->alias = "freopen";
	return 0;
}

Cfreopen::Cfreopen()
{
	this->my_init();
}

Cfreopen::~Cfreopen()
{

}

#ifndef FREOPEN_TEST
#define FREOPEN_TEST 0//1
#endif

#if FREOPEN_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FREOPEN_TEST\n\n";

	return 0;
}
#endif 