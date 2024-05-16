#include "towctrans.h"
int Ctowctrans::my_init(void *p)
{
	this->name = "Ctowctrans";
	this->alias = "towctrans";
	return 0;
}

Ctowctrans::Ctowctrans()
{
	this->my_init();
}

Ctowctrans::~Ctowctrans()
{

}

#ifndef TOWCTRANS_TEST
#define TOWCTRANS_TEST 0//1
#endif

#if TOWCTRANS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TOWCTRANS_TEST\n\n";

	return 0;
}
#endif 