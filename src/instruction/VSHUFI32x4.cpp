#include "VSHUFI32x4.h"
int CVSHUFI32x4::my_init(void *p)
{
	this->name = "CVSHUFI32x4";
	this->alias = "VSHUFI32x4";
	return 0;
}

CVSHUFI32x4::CVSHUFI32x4()
{
	this->my_init();
}

CVSHUFI32x4::~CVSHUFI32x4()
{

}
