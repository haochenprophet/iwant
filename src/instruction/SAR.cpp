#include "SAR.h"
int CSAR::my_init(void *p)
{
	this->name = "CSAR";
	this->alias = "SAR";
	return 0;
}

CSAR::CSAR()
{
	this->my_init();
}

CSAR::~CSAR()
{

}
