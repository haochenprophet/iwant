#include "MOVMSKPS.h"
int CMOVMSKPS::my_init(void *p)
{
	this->name = "CMOVMSKPS";
	this->alias = "MOVMSKPS";
	return 0;
}

CMOVMSKPS::CMOVMSKPS()
{
	this->my_init();
}

CMOVMSKPS::~CMOVMSKPS()
{

}
