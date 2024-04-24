#include "life_birth.h"
int Clife_birth::my_init(void *p)
{
	this->name = "Clife_birth";
	this->alias = "life_birth";
	return 0;
}

Clife_birth::Clife_birth()
{
	this->my_init();
}

Clife_birth::~Clife_birth()
{

}

#ifndef LIFE_BIRTH_TEST
#define LIFE_BIRTH_TEST 0//1
#endif

#if LIFE_BIRTH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
