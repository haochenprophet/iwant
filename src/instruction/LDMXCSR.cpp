#include "LDMXCSR.h"
int CLDMXCSR::my_init(void *p)
{
	this->name = "CLDMXCSR";
	this->alias = "LDMXCSR";
	return 0;
}

CLDMXCSR::CLDMXCSR()
{
	this->my_init();
}

CLDMXCSR::~CLDMXCSR()
{

}
