#include "MONITOR.h"
int CMONITOR::my_init(void *p)
{
	this->name = "CMONITOR";
	this->alias = "MONITOR";
	return 0;
}

CMONITOR::CMONITOR()
{
	this->my_init();
}

CMONITOR::~CMONITOR()
{

}
