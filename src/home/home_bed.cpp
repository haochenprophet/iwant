#include "home_bed.h"
int Chome_bed::my_init(void *p)
{
	this->name = "Chome_bed";
	this->alias = "home_bed";
	return 0;
}

Chome_bed::Chome_bed()
{
	this->my_init();
}

Chome_bed::~Chome_bed()
{

}

#ifndef HOME_BED_TEST
#define HOME_BED_TEST 0//1
#endif

#if HOME_BED_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
