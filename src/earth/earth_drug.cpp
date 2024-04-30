#include "earth_drug.h"
int Cearth_drug::my_init(void *p)
{
	this->name = "Cearth_drug";
	this->alias = "earth_drug";
	return 0;
}

Cearth_drug::Cearth_drug()
{
	this->my_init();
}

Cearth_drug::~Cearth_drug()
{

}

#ifndef EARTH_DRUG_TEST
#define EARTH_DRUG_TEST 0//1
#endif

#if EARTH_DRUG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
