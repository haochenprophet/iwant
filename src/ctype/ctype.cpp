#include "ctype.h"
int Cctype::my_init(void *p)
{
	this->name = "Cctype";
	this->alias = "ctype";
	return 0;
}

Cctype::Cctype()
{
	this->my_init();
}

Cctype::~Cctype()
{

}

#ifndef CTYPE_TEST
#define CTYPE_TEST 0//1
#endif

#if CTYPE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CTYPE_TEST\n\n";

	return 0;
}
#endif 