#include "materiel_db.h"
int Cmateriel_db::my_init(void *p)
{
	this->name = "Cmateriel_db";
	this->alias = "materiel_db";
	return 0;
}

Cmateriel_db::Cmateriel_db()
{
	this->my_init();
}

Cmateriel_db::~Cmateriel_db()
{

}

#ifndef MATERIEL_DB_TEST
#define MATERIEL_DB_TEST 0//1
#endif

#if MATERIEL_DB_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
