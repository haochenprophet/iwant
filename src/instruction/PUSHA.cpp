#include "PUSHA.h"
int CPUSHA::my_init(void *p)
{
	this->name = "CPUSHA";
	this->alias = "PUSHA";
	return 0;
}

CPUSHA::CPUSHA()
{
	this->my_init();
}

CPUSHA::~CPUSHA()
{

}
