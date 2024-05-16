#include "life_health.h"
int Clife_health::my_init(void *p)
{
	this->name = "Clife_health";
	this->alias = "life_health";
	return 0;
}

Clife_health::Clife_health()
{
	this->my_init();
}

Clife_health::~Clife_health()
{

}

#ifndef LIFE_HEALTH_TEST
#define LIFE_HEALTH_TEST 0//1
#endif

#if LIFE_HEALTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
