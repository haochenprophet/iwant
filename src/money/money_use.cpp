#include "money_use.h"
int Cmoney_use::my_init(void *p)
{
	this->name = "Cmoney_use";
	this->alias = "money_use";
	return 0;
}

Cmoney_use::Cmoney_use()
{
	this->my_init();
}

Cmoney_use::~Cmoney_use()
{

}

#ifndef MONEY_USE_TEST
#define MONEY_USE_TEST 0//1
#endif

#if MONEY_USE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
