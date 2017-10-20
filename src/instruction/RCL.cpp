#include "RCL.h"
int CRCL::my_init(void *p)
{
	this->name = "CRCL";
	this->alias = "RCL";
	return 0;
}

CRCL::CRCL()
{
	this->my_init();
}

CRCL::~CRCL()
{

}
