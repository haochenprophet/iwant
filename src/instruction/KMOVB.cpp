#include "KMOVB.h"
int CKMOVB::my_init(void *p)
{
	this->name = "CKMOVB";
	this->alias = "KMOVB";
	return 0;
}

CKMOVB::CKMOVB()
{
	this->my_init();
}

CKMOVB::~CKMOVB()
{

}
