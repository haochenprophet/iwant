#include "RDPID.h"
int CRDPID::my_init(void *p)
{
	this->name = "CRDPID";
	this->alias = "RDPID";
	return 0;
}

CRDPID::CRDPID()
{
	this->my_init();
}

CRDPID::~CRDPID()
{

}
