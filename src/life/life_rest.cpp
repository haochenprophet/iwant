#include "life_rest.h"
int Clife_rest::my_init(void *p)
{
	this->name = "Clife_rest";
	this->alias = "life_rest";
	return 0;
}

Clife_rest::Clife_rest()
{
	this->my_init();
}

Clife_rest::~Clife_rest()
{

}

#ifndef LIFE_REST_TEST
#define LIFE_REST_TEST 0//1
#endif

#if LIFE_REST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
