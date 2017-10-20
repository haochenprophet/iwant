#include "PSADBW.h"
int CPSADBW::my_init(void *p)
{
	this->name = "CPSADBW";
	this->alias = "PSADBW";
	return 0;
}

CPSADBW::CPSADBW()
{
	this->my_init();
}

CPSADBW::~CPSADBW()
{

}
