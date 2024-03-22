#include "money_owner.h"
int Cmoney_owner::my_init(void *p)
{
	this->name = "Cmoney_owner";
	this->alias = "money_owner";
	return 0;
}

Cmoney_owner::Cmoney_owner()
{
	this->my_init();
}

Cmoney_owner::~Cmoney_owner()
{

}

#ifndef MONEY_OWNER_TEST
#define MONEY_OWNER_TEST 0//1
#endif

#if MONEY_OWNER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
