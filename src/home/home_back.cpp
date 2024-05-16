#include "home_back.h"
int Chome_back::my_init(void *p)
{
	this->name = "Chome_back";
	this->alias = "home_back";
	return 0;
}

Chome_back::Chome_back()
{
	this->my_init();
}

Chome_back::~Chome_back()
{

}

#ifndef HOME_BACK_TEST
#define HOME_BACK_TEST 0//1
#endif

#if HOME_BACK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
