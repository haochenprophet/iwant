#include "RDRAND.h"
int CRDRAND::my_init(void *p)
{
	this->name = "CRDRAND";
	this->alias = "RDRAND";
	return 0;
}

CRDRAND::CRDRAND()
{
	this->my_init();
}

CRDRAND::~CRDRAND()
{

}
