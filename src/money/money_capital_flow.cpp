#include "money_capital_flow.h"
int Cmoney_capital_flow::my_init(void *p)
{
	this->name = "Cmoney_capital_flow";
	this->alias = "money_capital_flow";
	return 0;
}

Cmoney_capital_flow::Cmoney_capital_flow()
{
	this->my_init();
}

Cmoney_capital_flow::~Cmoney_capital_flow()
{

}

#ifndef MONEY_CAPITAL_FLOW_TEST
#define MONEY_CAPITAL_FLOW_TEST 0//1
#endif

#if MONEY_CAPITAL_FLOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
