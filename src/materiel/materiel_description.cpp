#include "materiel_description.h"
int Cmateriel_description::my_init(void *p)
{
	this->name = "Cmateriel_description";
	this->alias = "materiel_description";
	return 0;
}

Cmateriel_description::Cmateriel_description()
{
	this->my_init();
}

Cmateriel_description::~Cmateriel_description()
{

}

#ifndef MATERIEL_DESCRIPTION_TEST
#define MATERIEL_DESCRIPTION_TEST 0//1
#endif

#if MATERIEL_DESCRIPTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
