#include "life_old.h"
int Clife_old::my_init(void *p)
{
	this->name = "Clife_old";
	this->alias = "life_old";
	return 0;
}

Clife_old::Clife_old()
{
	this->my_init();
}

Clife_old::~Clife_old()
{

}

#ifndef LIFE_OLD_TEST
#define LIFE_OLD_TEST 0//1
#endif

#if LIFE_OLD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
