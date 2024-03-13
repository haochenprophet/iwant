#include "materiel_owner.h"
int Cmateriel_owner::my_init(void *p)
{
	this->name = "Cmateriel_owner";
	this->alias = "materiel_owner";
	return 0;
}

Cmateriel_owner::Cmateriel_owner()
{
	this->my_init();
}

Cmateriel_owner::~Cmateriel_owner()
{

}

#ifndef MATERIEL_OWNER_TEST
#define MATERIEL_OWNER_TEST 0//1
#endif

#if MATERIEL_OWNER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
