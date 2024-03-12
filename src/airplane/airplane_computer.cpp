#include "airplane_computer.h"
int Cairplane_computer::my_init(void *p)
{
	this->name = "Cairplane_computer";
	this->alias = "airplane_computer";
	return 0;
}

Cairplane_computer::Cairplane_computer()
{
	this->my_init();
}

Cairplane_computer::~Cairplane_computer()
{

}

#ifndef AIRPLANE_COMPUTER_TEST
#define AIRPLANE_COMPUTER_TEST 0//1
#endif

#if AIRPLANE_COMPUTER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
