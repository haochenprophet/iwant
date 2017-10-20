#include "VPERMD.h"
int CVPERMD::my_init(void *p)
{
	this->name = "CVPERMD";
	this->alias = "VPERMD";
	return 0;
}

CVPERMD::CVPERMD()
{
	this->my_init();
}

CVPERMD::~CVPERMD()
{

}
