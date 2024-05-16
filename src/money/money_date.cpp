#include "money_date.h"
int Cmoney_date::my_init(void *p)
{
	this->name = "Cmoney_date";
	this->alias = "money_date";
	return 0;
}

Cmoney_date::Cmoney_date()
{
	this->my_init();
}

Cmoney_date::~Cmoney_date()
{

}

#ifndef MONEY_DATE_TEST
#define MONEY_DATE_TEST 0//1
#endif

#if MONEY_DATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
