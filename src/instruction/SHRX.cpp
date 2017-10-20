#include "SHRX.h"
int CSHRX::my_init(void *p)
{
	this->name = "CSHRX";
	this->alias = "SHRX";
	return 0;
}

CSHRX::CSHRX()
{
	this->my_init();
}

CSHRX::~CSHRX()
{

}
