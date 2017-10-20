#include "VFIXUPIMMSD.h"
int CVFIXUPIMMSD::my_init(void *p)
{
	this->name = "CVFIXUPIMMSD";
	this->alias = "VFIXUPIMMSD";
	return 0;
}

CVFIXUPIMMSD::CVFIXUPIMMSD()
{
	this->my_init();
}

CVFIXUPIMMSD::~CVFIXUPIMMSD()
{

}
