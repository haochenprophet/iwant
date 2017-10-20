#include "SHLX.h"
int CSHLX::my_init(void *p)
{
	this->name = "CSHLX";
	this->alias = "SHLX";
	return 0;
}

CSHLX::CSHLX()
{
	this->my_init();
}

CSHLX::~CSHLX()
{

}
