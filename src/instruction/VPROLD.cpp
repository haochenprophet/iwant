#include "VPROLD.h"
int CVPROLD::my_init(void *p)
{
	this->name = "CVPROLD";
	this->alias = "VPROLD";
	return 0;
}

CVPROLD::CVPROLD()
{
	this->my_init();
}

CVPROLD::~CVPROLD()
{

}
