#include "warship_information.h"
int Cwarship_information::my_init(void *p)
{
	this->name = "Cwarship_information";
	this->alias = "warship_information";
	return 0;
}

Cwarship_information::Cwarship_information()
{
	this->my_init();
}

Cwarship_information::~Cwarship_information()
{

}

#ifndef WARSHIP_INFORMATION_TEST
#define WARSHIP_INFORMATION_TEST 0//1
#endif

#if WARSHIP_INFORMATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
