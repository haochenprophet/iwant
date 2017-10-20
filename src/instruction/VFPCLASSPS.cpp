#include "VFPCLASSPS.h"
int CVFPCLASSPS::my_init(void *p)
{
	this->name = "CVFPCLASSPS";
	this->alias = "VFPCLASSPS";
	return 0;
}

CVFPCLASSPS::CVFPCLASSPS()
{
	this->my_init();
}

CVFPCLASSPS::~CVFPCLASSPS()
{

}
