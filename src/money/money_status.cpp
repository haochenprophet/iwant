#include "money_status.h"
int Cmoney_status::my_init(void *p)
{
	this->name = "Cmoney_status";
	this->alias = "money_status";
	return 0;
}

Cmoney_status::Cmoney_status()
{
	this->my_init();
}

Cmoney_status::~Cmoney_status()
{

}

#ifndef MONEY_STATUS_TEST
#define MONEY_STATUS_TEST 0//1
#endif

#if MONEY_STATUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
