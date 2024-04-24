#include "life_walk.h"
int Clife_walk::my_init(void *p)
{
	this->name = "Clife_walk";
	this->alias = "life_walk";
	return 0;
}

Clife_walk::Clife_walk()
{
	this->my_init();
}

Clife_walk::~Clife_walk()
{

}

#ifndef LIFE_WALK_TEST
#define LIFE_WALK_TEST 0//1
#endif

#if LIFE_WALK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
