#include "MOVHPS.h"
int CMOVHPS::my_init(void *p)
{
	this->name = "CMOVHPS";
	this->alias = "MOVHPS";
	return 0;
}

CMOVHPS::CMOVHPS()
{
	this->my_init();
}

CMOVHPS::~CMOVHPS()
{

}
