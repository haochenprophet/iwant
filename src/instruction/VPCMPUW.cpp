#include "VPCMPUW.h"
int CVPCMPUW::my_init(void *p)
{
	this->name = "CVPCMPUW";
	this->alias = "VPCMPUW";
	return 0;
}

CVPCMPUW::CVPCMPUW()
{
	this->my_init();
}

CVPCMPUW::~CVPCMPUW()
{

}
