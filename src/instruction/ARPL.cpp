#include "ARPL.h"
int CARPL::my_init(void *p)
{
	this->name = "CARPL";
	this->alias = "ARPL";
	return 0;
}

CARPL::CARPL()
{
	this->my_init();
}

CARPL::~CARPL()
{

}
