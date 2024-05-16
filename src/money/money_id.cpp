#include "money_id.h"
int Cmoney_id::my_init(void *p)
{
	this->name = "Cmoney_id";
	this->alias = "money_id";
	return 0;
}

Cmoney_id::Cmoney_id()
{
	this->my_init();
}

Cmoney_id::~Cmoney_id()
{

}

#ifndef MONEY_ID_TEST
#define MONEY_ID_TEST 0//1
#endif

#if MONEY_ID_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
