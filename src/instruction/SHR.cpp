#include "SHR.h"
int CSHR::my_init(void *p)
{
	this->name = "CSHR";
	this->alias = "SHR";
	return 0;
}

CSHR::CSHR()
{
	this->my_init();
}

CSHR::~CSHR()
{

}
