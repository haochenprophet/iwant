#include "PUSH.h"
int CPUSH::my_init(void *p)
{
	this->name = "CPUSH";
	this->alias = "PUSH";
	return 0;
}

CPUSH::CPUSH()
{
	this->my_init();
}

CPUSH::~CPUSH()
{

}
