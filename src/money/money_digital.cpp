#include "money_digital.h"
int Cmoney_digital::my_init(void *p)
{
	this->name = "Cmoney_digital";
	this->alias = "money_digital";
	return 0;
}

Cmoney_digital::Cmoney_digital()
{
	this->my_init();
}

Cmoney_digital::~Cmoney_digital()
{

}

#ifndef MONEY_DIGITAL_TEST
#define MONEY_DIGITAL_TEST 0//1
#endif

#if MONEY_DIGITAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
