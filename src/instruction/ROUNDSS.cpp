#include "ROUNDSS.h"
int CROUNDSS::my_init(void *p)
{
	this->name = "CROUNDSS";
	this->alias = "ROUNDSS";
	return 0;
}

CROUNDSS::CROUNDSS()
{
	this->my_init();
}

CROUNDSS::~CROUNDSS()
{

}
