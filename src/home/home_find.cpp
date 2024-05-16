#include "home_find.h"
int Chome_find::my_init(void *p)
{
	this->name = "Chome_find";
	this->alias = "home_find";
	return 0;
}

Chome_find::Chome_find()
{
	this->my_init();
}

Chome_find::~Chome_find()
{

}

#ifndef HOME_FIND_TEST
#define HOME_FIND_TEST 0//1
#endif

#if HOME_FIND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
