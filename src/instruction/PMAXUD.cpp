#include "PMAXUD.h"
int CPMAXUD::my_init(void *p)
{
	this->name = "CPMAXUD";
	this->alias = "PMAXUD";
	return 0;
}

CPMAXUD::CPMAXUD()
{
	this->my_init();
}

CPMAXUD::~CPMAXUD()
{

}
