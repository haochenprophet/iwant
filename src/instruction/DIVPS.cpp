#include "DIVPS.h"
int CDIVPS::my_init(void *p)
{
	this->name = "CDIVPS";
	this->alias = "DIVPS";
	return 0;
}

CDIVPS::CDIVPS()
{
	this->my_init();
}

CDIVPS::~CDIVPS()
{

}
