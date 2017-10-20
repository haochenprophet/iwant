#include "MULSS.h"
int CMULSS::my_init(void *p)
{
	this->name = "CMULSS";
	this->alias = "MULSS";
	return 0;
}

CMULSS::CMULSS()
{
	this->my_init();
}

CMULSS::~CMULSS()
{

}
