#include "materiel_request.h"
int Cmateriel_request::my_init(void *p)
{
	this->name = "Cmateriel_request";
	this->alias = "materiel_request";
	return 0;
}

Cmateriel_request::Cmateriel_request()
{
	this->my_init();
}

Cmateriel_request::~Cmateriel_request()
{

}

#ifndef MATERIEL_REQUEST_TEST
#define MATERIEL_REQUEST_TEST 0//1
#endif

#if MATERIEL_REQUEST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
