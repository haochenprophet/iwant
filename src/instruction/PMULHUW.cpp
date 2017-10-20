#include "PMULHUW.h"
int CPMULHUW::my_init(void *p)
{
	this->name = "CPMULHUW";
	this->alias = "PMULHUW";
	return 0;
}

CPMULHUW::CPMULHUW()
{
	this->my_init();
}

CPMULHUW::~CPMULHUW()
{

}
