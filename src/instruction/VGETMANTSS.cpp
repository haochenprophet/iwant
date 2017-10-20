#include "VGETMANTSS.h"
int CVGETMANTSS::my_init(void *p)
{
	this->name = "CVGETMANTSS";
	this->alias = "VGETMANTSS";
	return 0;
}

CVGETMANTSS::CVGETMANTSS()
{
	this->my_init();
}

CVGETMANTSS::~CVGETMANTSS()
{

}
