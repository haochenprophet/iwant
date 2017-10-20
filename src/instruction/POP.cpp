#include "POP.h"
int CPOP::my_init(void *p)
{
	this->name = "CPOP";
	this->alias = "POP";
	return 0;
}

CPOP::CPOP()
{
	this->my_init();
}

CPOP::~CPOP()
{

}
