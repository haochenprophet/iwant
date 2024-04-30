#include "home_storeroom.h"
int Chome_storeroom::my_init(void *p)
{
	this->name = "Chome_storeroom";
	this->alias = "home_storeroom";
	return 0;
}

Chome_storeroom::Chome_storeroom()
{
	this->my_init();
}

Chome_storeroom::~Chome_storeroom()
{

}

#ifndef HOME_STOREROOM_TEST
#define HOME_STOREROOM_TEST 0//1
#endif

#if HOME_STOREROOM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
