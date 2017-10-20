#include "VPCOMPRESSD.h"
int CVPCOMPRESSD::my_init(void *p)
{
	this->name = "CVPCOMPRESSD";
	this->alias = "VPCOMPRESSD";
	return 0;
}

CVPCOMPRESSD::CVPCOMPRESSD()
{
	this->my_init();
}

CVPCOMPRESSD::~CVPCOMPRESSD()
{

}
