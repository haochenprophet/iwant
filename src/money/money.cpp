#include "money.h"
int Cmoney::my_init(void *p)
{
	this->name = "Cmoney";
	this->alias = "money";
	return 0;
}

Cmoney::Cmoney()
{
	this->my_init();
}

Cmoney::~Cmoney()
{

}

#ifndef MONEY_TEST
#define MONEY_TEST 0//1
#endif

#if MONEY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
