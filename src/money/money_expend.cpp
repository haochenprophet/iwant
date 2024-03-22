#include "money_expend.h"
int Cmoney_expend::my_init(void *p)
{
	this->name = "Cmoney_expend";
	this->alias = "money_expend";
	return 0;
}

Cmoney_expend::Cmoney_expend()
{
	this->my_init();
}

Cmoney_expend::~Cmoney_expend()
{

}

#ifndef MONEY_EXPEND_TEST
#define MONEY_EXPEND_TEST 0//1
#endif

#if MONEY_EXPEND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
