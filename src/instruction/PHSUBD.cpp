#include "PHSUBD.h"
int CPHSUBD::my_init(void *p)
{
	this->name = "CPHSUBD";
	this->alias = "PHSUBD";
	return 0;
}

CPHSUBD::CPHSUBD()
{
	this->my_init();
}

CPHSUBD::~CPHSUBD()
{

}
