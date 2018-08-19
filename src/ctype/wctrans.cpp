#include "wctrans.h"
int Cwctrans::my_init(void *p)
{
	this->name = "Cwctrans";
	this->alias = "wctrans";
	return 0;
}

Cwctrans::Cwctrans()
{
	this->my_init();
}

Cwctrans::~Cwctrans()
{

}

#ifndef WCTRANS_TEST
#define WCTRANS_TEST 0//1
#endif

#if WCTRANS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCTRANS_TEST\n\n";

	return 0;
}
#endif 