#include "home_totemism.h"
int Chome_totemism::my_init(void *p)
{
	this->name = "Chome_totemism";
	this->alias = "home_totemism";
	return 0;
}

Chome_totemism::Chome_totemism()
{
	this->my_init();
}

Chome_totemism::~Chome_totemism()
{

}

#ifndef HOME_TOTEMISM_TEST
#define HOME_TOTEMISM_TEST 0//1
#endif

#if HOME_TOTEMISM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
