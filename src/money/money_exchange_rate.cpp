#include "money_exchange_rate.h"
int Cmoney_exchange_rate::my_init(void *p)
{
	this->name = "Cmoney_exchange_rate";
	this->alias = "money_exchange_rate";
	return 0;
}

Cmoney_exchange_rate::Cmoney_exchange_rate()
{
	this->my_init();
}

Cmoney_exchange_rate::~Cmoney_exchange_rate()
{

}

#ifndef MONEY_EXCHANGE_RATE_TEST
#define MONEY_EXCHANGE_RATE_TEST 0//1
#endif

#if MONEY_EXCHANGE_RATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
