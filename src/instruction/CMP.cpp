#include "CMP.h"
int CCMP::my_init(void *p)
{
	this->name = "CCMP";
	this->alias = "CMP";
	return 0;
}

CCMP::CCMP()
{
	this->my_init();
}

CCMP::~CCMP()
{

}
