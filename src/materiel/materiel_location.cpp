#include "materiel_location.h"
int Cmateriel_location::my_init(void *p)
{
	this->name = "Cmateriel_location";
	this->alias = "materiel_location";
	return 0;
}

Cmateriel_location::Cmateriel_location()
{
	this->my_init();
}

Cmateriel_location::~Cmateriel_location()
{

}

#ifndef MATERIEL_LOCATION_TEST
#define MATERIEL_LOCATION_TEST 0//1
#endif

#if MATERIEL_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
