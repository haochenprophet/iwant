#include "materiel_url.h"
int Cmateriel_url::my_init(void *p)
{
	this->name = "Cmateriel_url";
	this->alias = "materiel_url";
	return 0;
}

Cmateriel_url::Cmateriel_url()
{
	this->my_init();
}

Cmateriel_url::~Cmateriel_url()
{

}

#ifndef MATERIEL_URL_TEST
#define MATERIEL_URL_TEST 0//1
#endif

#if MATERIEL_URL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
