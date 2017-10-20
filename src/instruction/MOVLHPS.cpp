#include "MOVLHPS.h"
int CMOVLHPS::my_init(void *p)
{
	this->name = "CMOVLHPS";
	this->alias = "MOVLHPS";
	return 0;
}

CMOVLHPS::CMOVLHPS()
{
	this->my_init();
}

CMOVLHPS::~CMOVLHPS()
{

}
