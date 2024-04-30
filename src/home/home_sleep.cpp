#include "home_sleep.h"
int Chome_sleep::my_init(void *p)
{
	this->name = "Chome_sleep";
	this->alias = "home_sleep";
	return 0;
}

Chome_sleep::Chome_sleep()
{
	this->my_init();
}

Chome_sleep::~Chome_sleep()
{

}

#ifndef HOME_SLEEP_TEST
#define HOME_SLEEP_TEST 0//1
#endif

#if HOME_SLEEP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
