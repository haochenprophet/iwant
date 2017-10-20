#include "VGETMANTPS.h"
int CVGETMANTPS::my_init(void *p)
{
	this->name = "CVGETMANTPS";
	this->alias = "VGETMANTPS";
	return 0;
}

CVGETMANTPS::CVGETMANTPS()
{
	this->my_init();
}

CVGETMANTPS::~CVGETMANTPS()
{

}
