#include "life_die.h"
int Clife_die::my_init(void *p)
{
	this->name = "Clife_die";
	this->alias = "life_die";
	return 0;
}

Clife_die::Clife_die()
{
	this->my_init();
}

Clife_die::~Clife_die()
{

}

#ifndef LIFE_DIE_TEST
#define LIFE_DIE_TEST 0//1
#endif

#if LIFE_DIE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
