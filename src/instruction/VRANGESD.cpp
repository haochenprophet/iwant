#include "VRANGESD.h"
int CVRANGESD::my_init(void *p)
{
	this->name = "CVRANGESD";
	this->alias = "VRANGESD";
	return 0;
}

CVRANGESD::CVRANGESD()
{
	this->my_init();
}

CVRANGESD::~CVRANGESD()
{

}
