#include "VFPCLASSSS.h"
int CVFPCLASSSS::my_init(void *p)
{
	this->name = "CVFPCLASSSS";
	this->alias = "VFPCLASSSS";
	return 0;
}

CVFPCLASSSS::CVFPCLASSSS()
{
	this->my_init();
}

CVFPCLASSSS::~CVFPCLASSSS()
{

}
