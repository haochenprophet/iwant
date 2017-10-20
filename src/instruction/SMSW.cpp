#include "SMSW.h"
int CSMSW::my_init(void *p)
{
	this->name = "CSMSW";
	this->alias = "SMSW";
	return 0;
}

CSMSW::CSMSW()
{
	this->my_init();
}

CSMSW::~CSMSW()
{

}
