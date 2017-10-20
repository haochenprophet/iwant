#include "RORX.h"
int CRORX::my_init(void *p)
{
	this->name = "CRORX";
	this->alias = "RORX";
	return 0;
}

CRORX::CRORX()
{
	this->my_init();
}

CRORX::~CRORX()
{

}
