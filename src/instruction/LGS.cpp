#include "LGS.h"
int CLGS::my_init(void *p)
{
	this->name = "CLGS";
	this->alias = "LGS";
	return 0;
}

CLGS::CLGS()
{
	this->my_init();
}

CLGS::~CLGS()
{

}
