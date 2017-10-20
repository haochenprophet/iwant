#include "PMAXUW.h"
int CPMAXUW::my_init(void *p)
{
	this->name = "CPMAXUW";
	this->alias = "PMAXUW";
	return 0;
}

CPMAXUW::CPMAXUW()
{
	this->my_init();
}

CPMAXUW::~CPMAXUW()
{

}
