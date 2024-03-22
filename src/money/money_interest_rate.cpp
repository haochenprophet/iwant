#include "money_interest_rate.h"
int Cmoney_interest_rate::my_init(void *p)
{
	this->name = "Cmoney_interest_rate";
	this->alias = "money_interest_rate";
	return 0;
}

Cmoney_interest_rate::Cmoney_interest_rate()
{
	this->my_init();
}

Cmoney_interest_rate::~Cmoney_interest_rate()
{

}

#ifndef MONEY_INTEREST_RATE_TEST
#define MONEY_INTEREST_RATE_TEST 0//1
#endif

#if MONEY_INTEREST_RATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
