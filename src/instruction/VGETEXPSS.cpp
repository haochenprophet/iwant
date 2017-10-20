#include "VGETEXPSS.h"
int CVGETEXPSS::my_init(void *p)
{
	this->name = "CVGETEXPSS";
	this->alias = "VGETEXPSS";
	return 0;
}

CVGETEXPSS::CVGETEXPSS()
{
	this->my_init();
}

CVGETEXPSS::~CVGETEXPSS()
{

}
