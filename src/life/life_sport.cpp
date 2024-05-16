#include "life_sport.h"
int Clife_sport::my_init(void *p)
{
	this->name = "Clife_sport";
	this->alias = "life_sport";
	return 0;
}

Clife_sport::Clife_sport()
{
	this->my_init();
}

Clife_sport::~Clife_sport()
{

}

#ifndef LIFE_SPORT_TEST
#define LIFE_SPORT_TEST 0//1
#endif

#if LIFE_SPORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
