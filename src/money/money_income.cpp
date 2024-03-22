#include "money_income.h"
int Cmoney_income::my_init(void *p)
{
	this->name = "Cmoney_income";
	this->alias = "money_income";
	return 0;
}

Cmoney_income::Cmoney_income()
{
	this->my_init();
}

Cmoney_income::~Cmoney_income()
{

}

#ifndef MONEY_INCOME_TEST
#define MONEY_INCOME_TEST 0//1
#endif

#if MONEY_INCOME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
