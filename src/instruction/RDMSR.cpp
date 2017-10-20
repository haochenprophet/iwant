#include "RDMSR.h"
int CRDMSR::my_init(void *p)
{
	this->name = "CRDMSR";
	this->alias = "RDMSR";
	return 0;
}

CRDMSR::CRDMSR()
{
	this->my_init();
}

CRDMSR::~CRDMSR()
{

}
