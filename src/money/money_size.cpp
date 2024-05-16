#include "money_size.h"
int Cmoney_size::my_init(void *p)
{
	this->name = "Cmoney_size";
	this->alias = "money_size";
	return 0;
}

Cmoney_size::Cmoney_size()
{
	this->my_init();
}

Cmoney_size::~Cmoney_size()
{

}

#ifndef MONEY_SIZE_TEST
#define MONEY_SIZE_TEST 0//1
#endif

#if MONEY_SIZE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
