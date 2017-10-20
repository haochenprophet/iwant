#include "ADDSS.h"
int CADDSS::my_init(void *p)
{
	this->name = "CADDSS";
	this->alias = "ADDSS";
	return 0;
}

CADDSS::CADDSS()
{
	this->my_init();
}

CADDSS::~CADDSS()
{

}
