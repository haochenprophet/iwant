#include "LOCK.h"
int CLOCK::my_init(void *p)
{
	this->name = "CLOCK";
	this->alias = "LOCK";
	return 0;
}

CLOCK::CLOCK()
{
	this->my_init();
}

CLOCK::~CLOCK()
{

}
