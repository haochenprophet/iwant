#include "RDTSC.h"
int CRDTSC::my_init(void *p)
{
	this->name = "CRDTSC";
	this->alias = "RDTSC";
	return 0;
}

CRDTSC::CRDTSC()
{
	this->my_init();
}

CRDTSC::~CRDTSC()
{

}
