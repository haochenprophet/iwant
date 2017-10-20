#include "SBB.h"
int CSBB::my_init(void *p)
{
	this->name = "CSBB";
	this->alias = "SBB";
	return 0;
}

CSBB::CSBB()
{
	this->my_init();
}

CSBB::~CSBB()
{

}
