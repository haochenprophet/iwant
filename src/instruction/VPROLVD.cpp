#include "VPROLVD.h"
int CVPROLVD::my_init(void *p)
{
	this->name = "CVPROLVD";
	this->alias = "VPROLVD";
	return 0;
}

CVPROLVD::CVPROLVD()
{
	this->my_init();
}

CVPROLVD::~CVPROLVD()
{

}
