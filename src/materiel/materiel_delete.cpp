#include "materiel_delete.h"
int Cmateriel_delete::my_init(void *p)
{
	this->name = "Cmateriel_delete";
	this->alias = "materiel_delete";
	return 0;
}

Cmateriel_delete::Cmateriel_delete()
{
	this->my_init();
}

Cmateriel_delete::~Cmateriel_delete()
{

}

#ifndef MATERIEL_DELETE_TEST
#define MATERIEL_DELETE_TEST 0//1
#endif

#if MATERIEL_DELETE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
