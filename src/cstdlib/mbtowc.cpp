#include "mbtowc.h"
int Cmbtowc::my_init(void *p)
{
	this->name = "Cmbtowc";
	this->alias = "mbtowc";
	return 0;
}

Cmbtowc::Cmbtowc()
{
	this->my_init();
}

Cmbtowc::~Cmbtowc()
{

}

#ifndef MBTOWC_TEST
#define MBTOWC_TEST 0//1
#endif

#if MBTOWC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MBTOWC_TEST\n\n";

	return 0;
}
#endif 