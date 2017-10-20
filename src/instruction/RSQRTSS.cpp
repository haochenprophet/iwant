#include "RSQRTSS.h"
int CRSQRTSS::my_init(void *p)
{
	this->name = "CRSQRTSS";
	this->alias = "RSQRTSS";
	return 0;
}

CRSQRTSS::CRSQRTSS()
{
	this->my_init();
}

CRSQRTSS::~CRSQRTSS()
{

}
