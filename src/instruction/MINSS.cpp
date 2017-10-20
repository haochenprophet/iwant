#include "MINSS.h"
int CMINSS::my_init(void *p)
{
	this->name = "CMINSS";
	this->alias = "MINSS";
	return 0;
}

CMINSS::CMINSS()
{
	this->my_init();
}

CMINSS::~CMINSS()
{

}
