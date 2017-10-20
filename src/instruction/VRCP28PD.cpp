#include "VRCP28PD.h"
int CVRCP28PD::my_init(void *p)
{
	this->name = "CVRCP28PD";
	this->alias = "VRCP28PD";
	return 0;
}

CVRCP28PD::CVRCP28PD()
{
	this->my_init();
}

CVRCP28PD::~CVRCP28PD()
{

}
