#include "money_weight.h"
int Cmoney_weight::my_init(void *p)
{
	this->name = "Cmoney_weight";
	this->alias = "money_weight";
	return 0;
}

Cmoney_weight::Cmoney_weight()
{
	this->my_init();
}

Cmoney_weight::~Cmoney_weight()
{

}

#ifndef MONEY_WEIGHT_TEST
#define MONEY_WEIGHT_TEST 0//1
#endif

#if MONEY_WEIGHT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
