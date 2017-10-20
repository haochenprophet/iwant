#include "VFIXUPIMMPS.h"
int CVFIXUPIMMPS::my_init(void *p)
{
	this->name = "CVFIXUPIMMPS";
	this->alias = "VFIXUPIMMPS";
	return 0;
}

CVFIXUPIMMPS::CVFIXUPIMMPS()
{
	this->my_init();
}

CVFIXUPIMMPS::~CVFIXUPIMMPS()
{

}
