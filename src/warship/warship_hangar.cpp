#include "warship_hangar.h"
int Cwarship_hangar::my_init(void *p)
{
	this->name = "Cwarship_hangar";
	this->alias = "warship_hangar";
	return 0;
}

Cwarship_hangar::Cwarship_hangar()
{
	this->my_init();
}

Cwarship_hangar::~Cwarship_hangar()
{

}

#ifndef WARSHIP_HANGAR_TEST
#define WARSHIP_HANGAR_TEST 0//1
#endif

#if WARSHIP_HANGAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
