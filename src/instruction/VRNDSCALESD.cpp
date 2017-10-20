#include "VRNDSCALESD.h"
int CVRNDSCALESD::my_init(void *p)
{
	this->name = "CVRNDSCALESD";
	this->alias = "VRNDSCALESD";
	return 0;
}

CVRNDSCALESD::CVRNDSCALESD()
{
	this->my_init();
}

CVRNDSCALESD::~CVRNDSCALESD()
{

}
