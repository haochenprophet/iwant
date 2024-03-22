#include "money_amount.h"
int Cmoney_amount::my_init(void *p)
{
	this->name = "Cmoney_amount";
	this->alias = "money_amount";
	return 0;
}

Cmoney_amount::Cmoney_amount()
{
	this->my_init();
}

Cmoney_amount::~Cmoney_amount()
{

}

#ifndef MONEY_AMOUNT_TEST
#define MONEY_AMOUNT_TEST 0//1
#endif

#if MONEY_AMOUNT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
