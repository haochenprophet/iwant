#include "KANDNB.h"
int CKANDNB::my_init(void *p)
{
	this->name = "CKANDNB";
	this->alias = "KANDNB";
	return 0;
}

CKANDNB::CKANDNB()
{
	this->my_init();
}

CKANDNB::~CKANDNB()
{

}
