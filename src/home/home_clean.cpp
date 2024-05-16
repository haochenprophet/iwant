#include "home_clean.h"
int Chome_clean::my_init(void *p)
{
	this->name = "Chome_clean";
	this->alias = "home_clean";
	return 0;
}

Chome_clean::Chome_clean()
{
	this->my_init();
}

Chome_clean::~Chome_clean()
{

}

#ifndef HOME_CLEAN_TEST
#define HOME_CLEAN_TEST 0//1
#endif

#if HOME_CLEAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
