#include "warship_guided_missile.h"
int Cwarship_guided_missile::my_init(void *p)
{
	this->name = "Cwarship_guided_missile";
	this->alias = "warship_guided_missile";
	return 0;
}

Cwarship_guided_missile::Cwarship_guided_missile()
{
	this->my_init();
}

Cwarship_guided_missile::~Cwarship_guided_missile()
{

}

#ifndef WARSHIP_GUIDED_MISSILE_TEST
#define WARSHIP_GUIDED_MISSILE_TEST 0//1
#endif

#if WARSHIP_GUIDED_MISSILE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
