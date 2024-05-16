#include "warship_commander.h"
int Cwarship_commander::my_init(void *p)
{
	this->name = "Cwarship_commander";
	this->alias = "warship_commander";
	return 0;
}

Cwarship_commander::Cwarship_commander()
{
	this->my_init();
}

Cwarship_commander::~Cwarship_commander()
{

}

#ifndef WARSHIP_COMMANDER_TEST
#define WARSHIP_COMMANDER_TEST 0//1
#endif

#if WARSHIP_COMMANDER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
