#include "BNDSTX.h"
int CBNDSTX::my_init(void *p)
{
	this->name = "CBNDSTX";
	this->alias = "BNDSTX";
	return 0;
}

CBNDSTX::CBNDSTX()
{
	this->my_init();
}

CBNDSTX::~CBNDSTX()
{

}
