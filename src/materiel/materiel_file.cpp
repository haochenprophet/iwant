#include "materiel_file.h"
int Cmateriel_file::my_init(void *p)
{
	this->name = "Cmateriel_file";
	this->alias = "materiel_file";
	return 0;
}

Cmateriel_file::Cmateriel_file()
{
	this->my_init();
}

Cmateriel_file::~Cmateriel_file()
{

}

#ifndef MATERIEL_FILE_TEST
#define MATERIEL_FILE_TEST 0//1
#endif

#if MATERIEL_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
