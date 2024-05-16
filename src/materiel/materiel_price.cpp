#include "materiel_price.h"
int Cmateriel_price::my_init(void *p)
{
	this->name = "Cmateriel_price";
	this->alias = "materiel_price";
	return 0;
}

Cmateriel_price::Cmateriel_price()
{
	this->my_init();
}

Cmateriel_price::~Cmateriel_price()
{

}

#ifndef MATERIEL_PRICE_TEST
#define MATERIEL_PRICE_TEST 0//1
#endif

#if MATERIEL_PRICE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
