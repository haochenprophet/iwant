#include "warship_steer.h"
int Cwarship_steer::my_init(void *p)
{
	this->name = "Cwarship_steer";
	this->alias = "warship_steer";
	return 0;
}

Cwarship_steer::Cwarship_steer()
{
	this->my_init();
}

Cwarship_steer::~Cwarship_steer()
{

}

#ifndef WARSHIP_STEER_TEST
#define WARSHIP_STEER_TEST 0//1
#endif

#if WARSHIP_STEER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
