#include "warship_attack.h"
int Cwarship_attack::my_init(void *p)
{
	this->name = "Cwarship_attack";
	this->alias = "warship_attack";
	return 0;
}

Cwarship_attack::Cwarship_attack()
{
	this->my_init();
}

Cwarship_attack::~Cwarship_attack()
{

}

#ifndef WARSHIP_ATTACK_TEST
#define WARSHIP_ATTACK_TEST 0//1
#endif

#if WARSHIP_ATTACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
