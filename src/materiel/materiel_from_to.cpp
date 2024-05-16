#include "materiel_from_to.h"
int Cmateriel_from_to::my_init(void *p)
{
	this->name = "Cmateriel_from_to";
	this->alias = "materiel_from_to";
	return 0;
}

Cmateriel_from_to::Cmateriel_from_to()
{
	this->my_init();
}

Cmateriel_from_to::~Cmateriel_from_to()
{

}

#ifndef MATERIEL_FROM_TO_TEST
#define MATERIEL_FROM_TO_TEST 0//1
#endif

#if MATERIEL_FROM_TO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
