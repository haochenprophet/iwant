#include "life_eat.h"
int Clife_eat::my_init(void *p)
{
	this->name = "Clife_eat";
	this->alias = "life_eat";
	return 0;
}

Clife_eat::Clife_eat()
{
	this->my_init();
}

Clife_eat::~Clife_eat()
{

}

#ifndef LIFE_EAT_TEST
#define LIFE_EAT_TEST 0//1
#endif

#if LIFE_EAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
