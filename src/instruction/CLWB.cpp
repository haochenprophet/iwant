#include "CLWB.h"
int CCLWB::my_init(void *p)
{
	this->name = "CCLWB";
	this->alias = "CLWB";
	return 0;
}

CCLWB::CCLWB()
{
	this->my_init();
}

CCLWB::~CCLWB()
{

}
