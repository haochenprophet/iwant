#include "materiel_create.h"
int Cmateriel_create::my_init(void *p)
{
	this->name = "Cmateriel_create";
	this->alias = "materiel_create";
	return 0;
}

Cmateriel_create::Cmateriel_create()
{
	this->my_init();
}

Cmateriel_create::~Cmateriel_create()
{

}

#ifndef MATERIEL_CREATE_TEST
#define MATERIEL_CREATE_TEST 0//1
#endif

#if MATERIEL_CREATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
