#include "spaceport_person.h"
int Cspaceport_person::my_init(void *p)
{
	this->name = "Cspaceport_person";
	this->alias = "spaceport_person";
	return 0;
}

Cspaceport_person::Cspaceport_person()
{
	this->my_init();
}

Cspaceport_person::~Cspaceport_person()
{

}

#ifndef SPACEPORT_PERSON_TEST
#define SPACEPORT_PERSON_TEST 0//1
#endif

#if SPACEPORT_PERSON_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
