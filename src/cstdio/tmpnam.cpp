#include "tmpnam.h"
int Ctmpnam::my_init(void *p)
{
	this->name = "Ctmpnam";
	this->alias = "tmpnam";
	return 0;
}

Ctmpnam::Ctmpnam()
{
	this->my_init();
}

Ctmpnam::~Ctmpnam()
{

}

char* Ctmpnam::tmpnam_c(char* str)
{
	return tmpnam(str);
}

#ifndef TMPNAM_TEST
#define TMPNAM_TEST 0//1
#endif

#if TMPNAM_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "TMPNAM_TEST\n\n";

	return 0;
}
#endif 