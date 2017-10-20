#include "LFENCE.h"
int CLFENCE::my_init(void *p)
{
	this->name = "CLFENCE";
	this->alias = "LFENCE";
	return 0;
}

CLFENCE::CLFENCE()
{
	this->my_init();
}

CLFENCE::~CLFENCE()
{

}
