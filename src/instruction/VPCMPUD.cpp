#include "VPCMPUD.h"
int CVPCMPUD::my_init(void *p)
{
	this->name = "CVPCMPUD";
	this->alias = "VPCMPUD";
	return 0;
}

CVPCMPUD::CVPCMPUD()
{
	this->my_init();
}

CVPCMPUD::~CVPCMPUD()
{

}
