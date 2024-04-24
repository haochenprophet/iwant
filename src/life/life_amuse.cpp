#include "life_amuse.h"
int Clife_amuse::my_init(void *p)
{
	this->name = "Clife_amuse";
	this->alias = "life_amuse";
	return 0;
}

Clife_amuse::Clife_amuse()
{
	this->my_init();
}

Clife_amuse::~Clife_amuse()
{

}

#ifndef LIFE_AMUSE_TEST
#define LIFE_AMUSE_TEST 0//1
#endif

#if LIFE_AMUSE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
