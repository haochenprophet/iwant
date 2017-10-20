#include "VSHUFI64x2.h"
int CVSHUFI64x2::my_init(void *p)
{
	this->name = "CVSHUFI64x2";
	this->alias = "VSHUFI64x2";
	return 0;
}

CVSHUFI64x2::CVSHUFI64x2()
{
	this->my_init();
}

CVSHUFI64x2::~CVSHUFI64x2()
{

}
