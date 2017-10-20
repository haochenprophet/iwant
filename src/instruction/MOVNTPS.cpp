#include "MOVNTPS.h"
int CMOVNTPS::my_init(void *p)
{
	this->name = "CMOVNTPS";
	this->alias = "MOVNTPS";
	return 0;
}

CMOVNTPS::CMOVNTPS()
{
	this->my_init();
}

CMOVNTPS::~CMOVNTPS()
{

}
