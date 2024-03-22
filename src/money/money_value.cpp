#include "money_value.h"
int Cmoney_value::my_init(void *p)
{
	this->name = "Cmoney_value";
	this->alias = "money_value";
	return 0;
}

Cmoney_value::Cmoney_value()
{
	this->my_init();
}

Cmoney_value::~Cmoney_value()
{

}

#ifndef MONEY_VALUE_TEST
#define MONEY_VALUE_TEST 0//1
#endif

#if MONEY_VALUE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
