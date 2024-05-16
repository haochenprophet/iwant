#include "materiel_select.h"
int Cmateriel_select::my_init(void *p)
{
	this->name = "Cmateriel_select";
	this->alias = "materiel_select";
	return 0;
}

Cmateriel_select::Cmateriel_select()
{
	this->my_init();
}

Cmateriel_select::~Cmateriel_select()
{

}

#ifndef MATERIEL_SELECT_TEST
#define MATERIEL_SELECT_TEST 0//1
#endif

#if MATERIEL_SELECT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
