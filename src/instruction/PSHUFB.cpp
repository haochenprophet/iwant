#include "PSHUFB.h"
int CPSHUFB::my_init(void *p)
{
	this->name = "CPSHUFB";
	this->alias = "PSHUFB";
	return 0;
}

CPSHUFB::CPSHUFB()
{
	this->my_init();
}

CPSHUFB::~CPSHUFB()
{

}
