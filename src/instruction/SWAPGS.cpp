#include "SWAPGS.h"
int CSWAPGS::my_init(void *p)
{
	this->name = "CSWAPGS";
	this->alias = "SWAPGS";
	return 0;
}

CSWAPGS::CSWAPGS()
{
	this->my_init();
}

CSWAPGS::~CSWAPGS()
{

}
