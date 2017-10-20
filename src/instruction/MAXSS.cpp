#include "MAXSS.h"
int CMAXSS::my_init(void *p)
{
	this->name = "CMAXSS";
	this->alias = "MAXSS";
	return 0;
}

CMAXSS::CMAXSS()
{
	this->my_init();
}

CMAXSS::~CMAXSS()
{

}
