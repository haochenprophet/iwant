#include "FICOM.h"
int CFICOM::my_init(void *p)
{
	this->name = "CFICOM";
	this->alias = "FICOM";
	return 0;
}

CFICOM::CFICOM()
{
	this->my_init();
}

CFICOM::~CFICOM()
{

}
