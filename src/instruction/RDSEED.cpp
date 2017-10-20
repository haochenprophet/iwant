#include "RDSEED.h"
int CRDSEED::my_init(void *p)
{
	this->name = "CRDSEED";
	this->alias = "RDSEED";
	return 0;
}

CRDSEED::CRDSEED()
{
	this->my_init();
}

CRDSEED::~CRDSEED()
{

}
