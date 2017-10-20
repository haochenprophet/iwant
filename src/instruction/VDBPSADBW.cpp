#include "VDBPSADBW.h"
int CVDBPSADBW::my_init(void *p)
{
	this->name = "CVDBPSADBW";
	this->alias = "VDBPSADBW";
	return 0;
}

CVDBPSADBW::CVDBPSADBW()
{
	this->my_init();
}

CVDBPSADBW::~CVDBPSADBW()
{

}
