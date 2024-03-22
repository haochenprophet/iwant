#include "money_nation.h"
int Cmoney_nation::my_init(void *p)
{
	this->name = "Cmoney_nation";
	this->alias = "money_nation";
	return 0;
}

Cmoney_nation::Cmoney_nation()
{
	this->my_init();
}

Cmoney_nation::~Cmoney_nation()
{

}

#ifndef MONEY_NATION_TEST
#define MONEY_NATION_TEST 0//1
#endif

#if MONEY_NATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
