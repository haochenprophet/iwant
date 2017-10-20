#include "VFMSUB132SD.h"
int CVFMSUB132SD::my_init(void *p)
{
	this->name = "CVFMSUB132SD";
	this->alias = "VFMSUB132SD";
	return 0;
}

CVFMSUB132SD::CVFMSUB132SD()
{
	this->my_init();
}

CVFMSUB132SD::~CVFMSUB132SD()
{

}
