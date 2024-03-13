#include "materiel.h"
int Cmateriel::my_init(void *p)
{
	this->name = "Cmateriel";
	this->alias = "materiel";
	return 0;
}

Cmateriel::Cmateriel()
{
	this->my_init();
}

Cmateriel::~Cmateriel()
{

}

#ifndef MATERIEL_TEST
#define MATERIEL_TEST 0//1
#endif

#if MATERIEL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
