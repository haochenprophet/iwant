#include "materiel_statistics.h"
int Cmateriel_statistics::my_init(void *p)
{
	this->name = "Cmateriel_statistics";
	this->alias = "materiel_statistics";
	return 0;
}

Cmateriel_statistics::Cmateriel_statistics()
{
	this->my_init();
}

Cmateriel_statistics::~Cmateriel_statistics()
{

}

#ifndef MATERIEL_STATISTICS_TEST
#define MATERIEL_STATISTICS_TEST 0//1
#endif

#if MATERIEL_STATISTICS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
