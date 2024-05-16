#include "materiel_mysql.h"
int Cmateriel_mysql::my_init(void *p)
{
	this->name = "Cmateriel_mysql";
	this->alias = "materiel_mysql";
	return 0;
}

Cmateriel_mysql::Cmateriel_mysql()
{
	this->my_init();
}

Cmateriel_mysql::~Cmateriel_mysql()
{

}

#ifndef MATERIEL_MYSQL_TEST
#define MATERIEL_MYSQL_TEST 0//1
#endif

#if MATERIEL_MYSQL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
