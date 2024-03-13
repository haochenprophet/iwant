#include "warship_computer.h"
int Cwarship_computer::my_init(void *p)
{
	this->name = "Cwarship_computer";
	this->alias = "warship_computer";
	return 0;
}

Cwarship_computer::Cwarship_computer()
{
	this->my_init();
}

Cwarship_computer::~Cwarship_computer()
{

}

#ifndef WARSHIP_COMPUTER_TEST
#define WARSHIP_COMPUTER_TEST 0//1
#endif

#if WARSHIP_COMPUTER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
