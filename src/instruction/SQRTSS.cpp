#include "SQRTSS.h"
int CSQRTSS::my_init(void *p)
{
	this->name = "CSQRTSS";
	this->alias = "SQRTSS";
	return 0;
}

CSQRTSS::CSQRTSS()
{
	this->my_init();
}

CSQRTSS::~CSQRTSS()
{

}
