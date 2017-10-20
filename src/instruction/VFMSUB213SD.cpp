#include "VFMSUB213SD.h"
int CVFMSUB213SD::my_init(void *p)
{
	this->name = "CVFMSUB213SD";
	this->alias = "VFMSUB213SD";
	return 0;
}

CVFMSUB213SD::CVFMSUB213SD()
{
	this->my_init();
}

CVFMSUB213SD::~CVFMSUB213SD()
{

}
