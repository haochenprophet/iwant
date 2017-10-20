#include "PABSQ.h"
int CPABSQ::my_init(void *p)
{
	this->name = "CPABSQ";
	this->alias = "PABSQ";
	return 0;
}

CPABSQ::CPABSQ()
{
	this->my_init();
}

CPABSQ::~CPABSQ()
{

}
