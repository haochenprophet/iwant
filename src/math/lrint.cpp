#include "lrint.h"
int Clrint::my_init(void *p)
{
	this->name = "Clrint";
	this->alias = "lrint";
	return 0;
}

Clrint::Clrint()
{
	this->my_init();
}

Clrint::~Clrint()
{

}

#ifndef LRINT_TEST
#define LRINT_TEST 0//1
#endif

#if LRINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LRINT_TEST\n\n";

	return 0;
}
#endif 