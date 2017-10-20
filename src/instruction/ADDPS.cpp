#include "ADDPS.h"
int CADDPS::my_init(void *p)
{
	this->name = "CADDPS";
	this->alias = "ADDPS";
	return 0;
}

CADDPS::CADDPS()
{
	this->my_init();
}

CADDPS::~CADDPS()
{

}
