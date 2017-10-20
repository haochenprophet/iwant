#include "MFENCE.h"
int CMFENCE::my_init(void *p)
{
	this->name = "CMFENCE";
	this->alias = "MFENCE";
	return 0;
}

CMFENCE::CMFENCE()
{
	this->my_init();
}

CMFENCE::~CMFENCE()
{

}
