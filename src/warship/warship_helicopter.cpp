#include "warship_helicopter.h"
int Cwarship_helicopter::my_init(void *p)
{
	this->name = "Cwarship_helicopter";
	this->alias = "warship_helicopter";
	return 0;
}

Cwarship_helicopter::Cwarship_helicopter()
{
	this->my_init();
}

Cwarship_helicopter::~Cwarship_helicopter()
{

}

#ifndef WARSHIP_HELICOPTER_TEST
#define WARSHIP_HELICOPTER_TEST 0//1
#endif

#if WARSHIP_HELICOPTER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
