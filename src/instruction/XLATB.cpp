#include "XLATB.h"
int CXLATB::my_init(void *p)
{
	this->name = "CXLATB";
	this->alias = "XLATB";
	return 0;
}

CXLATB::CXLATB()
{
	this->my_init();
}

CXLATB::~CXLATB()
{

}
