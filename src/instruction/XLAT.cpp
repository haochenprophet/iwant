#include "XLAT.h"
int CXLAT::my_init(void *p)
{
	this->name = "CXLAT";
	this->alias = "XLAT";
	return 0;
}

CXLAT::CXLAT()
{
	this->my_init();
}

CXLAT::~CXLAT()
{

}
