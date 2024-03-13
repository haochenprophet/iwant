#include "warship_soldier.h"
int Cwarship_soldier::my_init(void *p)
{
	this->name = "Cwarship_soldier";
	this->alias = "warship_soldier";
	return 0;
}

Cwarship_soldier::Cwarship_soldier()
{
	this->my_init();
}

Cwarship_soldier::~Cwarship_soldier()
{

}

#ifndef WARSHIP_SOLDIER_TEST
#define WARSHIP_SOLDIER_TEST 0//1
#endif

#if WARSHIP_SOLDIER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
