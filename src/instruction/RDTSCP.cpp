#include "RDTSCP.h"
int CRDTSCP::my_init(void *p)
{
	this->name = "CRDTSCP";
	this->alias = "RDTSCP";
	return 0;
}

CRDTSCP::CRDTSCP()
{
	this->my_init();
}

CRDTSCP::~CRDTSCP()
{

}
