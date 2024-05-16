#include "security_defense.h"
int Csecurity_defense::my_init(void *p)
{
	this->name = "Csecurity_defense";
	this->alias = "security_defense";
	return 0;
}

Csecurity_defense::Csecurity_defense()
{
	this->my_init();
}

Csecurity_defense::~Csecurity_defense()
{

}

#ifndef SECURITY_DEFENSE_TEST
#define SECURITY_DEFENSE_TEST 0//1
#endif

#if SECURITY_DEFENSE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
