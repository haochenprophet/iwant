#include "money_dynasty.h"
int Cmoney_dynasty::my_init(void *p)
{
	this->name = "Cmoney_dynasty";
	this->alias = "money_dynasty";
	return 0;
}

Cmoney_dynasty::Cmoney_dynasty()
{
	this->my_init();
}

Cmoney_dynasty::~Cmoney_dynasty()
{

}

#ifndef MONEY_DYNASTY_TEST
#define MONEY_DYNASTY_TEST 0//1
#endif

#if MONEY_DYNASTY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
