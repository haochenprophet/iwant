#include "CMPSD.h"
int CCMPSD::my_init(void *p)
{
	this->name = "CCMPSD";
	this->alias = "CMPSD";
	return 0;
}

CCMPSD::CCMPSD()
{
	this->my_init();
}

CCMPSD::~CCMPSD()
{

}
