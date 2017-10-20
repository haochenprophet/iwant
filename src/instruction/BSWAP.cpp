#include "BSWAP.h"
int CBSWAP::my_init(void *p)
{
	this->name = "CBSWAP";
	this->alias = "BSWAP";
	return 0;
}

CBSWAP::CBSWAP()
{
	this->my_init();
}

CBSWAP::~CBSWAP()
{

}
