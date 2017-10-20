#include "VGETEXPSD.h"
int CVGETEXPSD::my_init(void *p)
{
	this->name = "CVGETEXPSD";
	this->alias = "VGETEXPSD";
	return 0;
}

CVGETEXPSD::CVGETEXPSD()
{
	this->my_init();
}

CVGETEXPSD::~CVGETEXPSD()
{

}
