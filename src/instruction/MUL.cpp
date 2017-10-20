#include "MUL.h"
int CMUL::my_init(void *p)
{
	this->name = "CMUL";
	this->alias = "MUL";
	return 0;
}

CMUL::CMUL()
{
	this->my_init();
}

CMUL::~CMUL()
{

}
