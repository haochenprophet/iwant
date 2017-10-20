#include "STC.h"
int CSTC::my_init(void *p)
{
	this->name = "CSTC";
	this->alias = "STC";
	return 0;
}

CSTC::CSTC()
{
	this->my_init();
}

CSTC::~CSTC()
{

}
