#include "materiel_type.h"
int Cmateriel_type::my_init(void *p)
{
	this->name = "Cmateriel_type";
	this->alias = "materiel_type";
	return 0;
}

Cmateriel_type::Cmateriel_type()
{
	this->my_init();
}

Cmateriel_type::~Cmateriel_type()
{

}

#ifndef MATERIEL_TYPE_TEST
#define MATERIEL_TYPE_TEST 0//1
#endif

#if MATERIEL_TYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
