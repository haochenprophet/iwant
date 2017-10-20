#include "MULX.h"
int CMULX::my_init(void *p)
{
	this->name = "CMULX";
	this->alias = "MULX";
	return 0;
}

CMULX::CMULX()
{
	this->my_init();
}

CMULX::~CMULX()
{

}
