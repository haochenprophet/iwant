#include "VGETMANTSD.h"
int CVGETMANTSD::my_init(void *p)
{
	this->name = "CVGETMANTSD";
	this->alias = "VGETMANTSD";
	return 0;
}

CVGETMANTSD::CVGETMANTSD()
{
	this->my_init();
}

CVGETMANTSD::~CVGETMANTSD()
{

}
