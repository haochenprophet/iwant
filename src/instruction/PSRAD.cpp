#include "PSRAD.h"
int CPSRAD::my_init(void *p)
{
	this->name = "CPSRAD";
	this->alias = "PSRAD";
	return 0;
}

CPSRAD::CPSRAD()
{
	this->my_init();
}

CPSRAD::~CPSRAD()
{

}
