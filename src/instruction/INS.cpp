#include "INS.h"
int CINS::my_init(void *p)
{
	this->name = "CINS";
	this->alias = "INS";
	return 0;
}

CINS::CINS()
{
	this->my_init();
}

CINS::~CINS()
{

}
