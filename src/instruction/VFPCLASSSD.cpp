#include "VFPCLASSSD.h"
int CVFPCLASSSD::my_init(void *p)
{
	this->name = "CVFPCLASSSD";
	this->alias = "VFPCLASSSD";
	return 0;
}

CVFPCLASSSD::CVFPCLASSSD()
{
	this->my_init();
}

CVFPCLASSSD::~CVFPCLASSSD()
{

}
