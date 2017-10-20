#include "CDQE.h"
int CCDQE::my_init(void *p)
{
	this->name = "CCDQE";
	this->alias = "CDQE";
	return 0;
}

CCDQE::CCDQE()
{
	this->my_init();
}

CCDQE::~CCDQE()
{

}
