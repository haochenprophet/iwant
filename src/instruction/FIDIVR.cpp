#include "FIDIVR.h"
int CFIDIVR::my_init(void *p)
{
	this->name = "CFIDIVR";
	this->alias = "FIDIVR";
	return 0;
}

CFIDIVR::CFIDIVR()
{
	this->my_init();
}

CFIDIVR::~CFIDIVR()
{

}
