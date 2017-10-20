#include "AAM.h"
int CAAM::my_init(void *p)
{
	this->name = "CAAM";
	this->alias = "AAM";
	return 0;
}

CAAM::CAAM()
{
	this->my_init();
}

CAAM::~CAAM()
{

}
