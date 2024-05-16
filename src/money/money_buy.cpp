#include "money_buy.h"
int Cmoney_buy::my_init(void *p)
{
	this->name = "Cmoney_buy";
	this->alias = "money_buy";
	return 0;
}

Cmoney_buy::Cmoney_buy()
{
	this->my_init();
}

Cmoney_buy::~Cmoney_buy()
{

}

#ifndef MONEY_BUY_TEST
#define MONEY_BUY_TEST 0//1
#endif

#if MONEY_BUY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
