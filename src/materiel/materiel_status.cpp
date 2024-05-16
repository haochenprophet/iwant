#include "materiel_status.h"
int Cmateriel_status::my_init(void *p)
{
	this->name = "Cmateriel_status";
	this->alias = "materiel_status";
	return 0;
}

Cmateriel_status::Cmateriel_status()
{
	this->my_init();
}

Cmateriel_status::~Cmateriel_status()
{

}

#ifndef MATERIEL_STATUS_TEST
#define MATERIEL_STATUS_TEST 0//1
#endif

#if MATERIEL_STATUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
