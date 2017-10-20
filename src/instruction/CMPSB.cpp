#include "CMPSB.h"
int CCMPSB::my_init(void *p)
{
	this->name = "CCMPSB";
	this->alias = "CMPSB";
	return 0;
}

CCMPSB::CCMPSB()
{
	this->my_init();
}

CCMPSB::~CCMPSB()
{

}
