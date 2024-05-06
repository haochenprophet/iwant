#include "security_people.h"
int Csecurity_people::my_init(void *p)
{
	this->name = "Csecurity_people";
	this->alias = "security_people";
	return 0;
}

Csecurity_people::Csecurity_people()
{
	this->my_init();
}

Csecurity_people::~Csecurity_people()
{

}

#ifndef SECURITY_PEOPLE_TEST
#define SECURITY_PEOPLE_TEST 0//1
#endif

#if SECURITY_PEOPLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
