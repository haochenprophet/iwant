#include "warship_defense.h"
int Cwarship_defense::my_init(void *p)
{
	this->name = "Cwarship_defense";
	this->alias = "warship_defense";
	return 0;
}

Cwarship_defense::Cwarship_defense()
{
	this->my_init();
}

Cwarship_defense::~Cwarship_defense()
{

}

#ifndef WARSHIP_DEFENSE_TEST
#define WARSHIP_DEFENSE_TEST 0//1
#endif

#if WARSHIP_DEFENSE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
