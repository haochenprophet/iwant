#include "MPSADBW.h"
int CMPSADBW::my_init(void *p)
{
	this->name = "CMPSADBW";
	this->alias = "MPSADBW";
	return 0;
}

CMPSADBW::CMPSADBW()
{
	this->my_init();
}

CMPSADBW::~CMPSADBW()
{

}
