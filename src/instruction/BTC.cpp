#include "BTC.h"
int CBTC::my_init(void *p)
{
	this->name = "CBTC";
	this->alias = "BTC";
	return 0;
}

CBTC::CBTC()
{
	this->my_init();
}

CBTC::~CBTC()
{

}
