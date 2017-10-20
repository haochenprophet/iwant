#include "MOVSB.h"
int CMOVSB::my_init(void *p)
{
	this->name = "CMOVSB";
	this->alias = "MOVSB";
	return 0;
}

CMOVSB::CMOVSB()
{
	this->my_init();
}

CMOVSB::~CMOVSB()
{

}
