#include "life_dress.h"
int Clife_dress::my_init(void *p)
{
	this->name = "Clife_dress";
	this->alias = "life_dress";
	return 0;
}

Clife_dress::Clife_dress()
{
	this->my_init();
}

Clife_dress::~Clife_dress()
{

}

#ifndef LIFE_DRESS_TEST
#define LIFE_DRESS_TEST 0//1
#endif

#if LIFE_DRESS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
