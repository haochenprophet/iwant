#include "home_person.h"
int Chome_person::my_init(void *p)
{
	this->name = "Chome_person";
	this->alias = "home_person";
	return 0;
}

Chome_person::Chome_person()
{
	this->my_init();
}

Chome_person::~Chome_person()
{

}

#ifndef HOME_PERSON_TEST
#define HOME_PERSON_TEST 0//1
#endif

#if HOME_PERSON_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
