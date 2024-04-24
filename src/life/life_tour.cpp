#include "life_tour.h"
int Clife_tour::my_init(void *p)
{
	this->name = "Clife_tour";
	this->alias = "life_tour";
	return 0;
}

Clife_tour::Clife_tour()
{
	this->my_init();
}

Clife_tour::~Clife_tour()
{

}

#ifndef LIFE_TOUR_TEST
#define LIFE_TOUR_TEST 0//1
#endif

#if LIFE_TOUR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
