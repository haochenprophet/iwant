#include "VFIXUPIMMSS.h"
int CVFIXUPIMMSS::my_init(void *p)
{
	this->name = "CVFIXUPIMMSS";
	this->alias = "VFIXUPIMMSS";
	return 0;
}

CVFIXUPIMMSS::CVFIXUPIMMSS()
{
	this->my_init();
}

CVFIXUPIMMSS::~CVFIXUPIMMSS()
{

}
