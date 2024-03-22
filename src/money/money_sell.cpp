#include "money_sell.h"
int Cmoney_sell::my_init(void *p)
{
	this->name = "Cmoney_sell";
	this->alias = "money_sell";
	return 0;
}

Cmoney_sell::Cmoney_sell()
{
	this->my_init();
}

Cmoney_sell::~Cmoney_sell()
{

}

#ifndef MONEY_SELL_TEST
#define MONEY_SELL_TEST 0//1
#endif

#if MONEY_SELL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
