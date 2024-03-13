#include "materiel_update.h"
int Cmateriel_update::my_init(void *p)
{
	this->name = "Cmateriel_update";
	this->alias = "materiel_update";
	return 0;
}

Cmateriel_update::Cmateriel_update()
{
	this->my_init();
}

Cmateriel_update::~Cmateriel_update()
{

}

#ifndef MATERIEL_UPDATE_TEST
#define MATERIEL_UPDATE_TEST 0//1
#endif

#if MATERIEL_UPDATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
