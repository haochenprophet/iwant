#include "PMULDQ.h"
int CPMULDQ::my_init(void *p)
{
	this->name = "CPMULDQ";
	this->alias = "PMULDQ";
	return 0;
}

CPMULDQ::CPMULDQ()
{
	this->my_init();
}

CPMULDQ::~CPMULDQ()
{

}
