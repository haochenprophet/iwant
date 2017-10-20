#include "PMULLQ.h"
int CPMULLQ::my_init(void *p)
{
	this->name = "CPMULLQ";
	this->alias = "PMULLQ";
	return 0;
}

CPMULLQ::CPMULLQ()
{
	this->my_init();
}

CPMULLQ::~CPMULLQ()
{

}
