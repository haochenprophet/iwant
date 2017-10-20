#include "VPRORD.h"
int CVPRORD::my_init(void *p)
{
	this->name = "CVPRORD";
	this->alias = "VPRORD";
	return 0;
}

CVPRORD::CVPRORD()
{
	this->my_init();
}

CVPRORD::~CVPRORD()
{

}
