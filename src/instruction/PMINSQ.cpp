#include "PMINSQ.h"
int CPMINSQ::my_init(void *p)
{
	this->name = "CPMINSQ";
	this->alias = "PMINSQ";
	return 0;
}

CPMINSQ::CPMINSQ()
{
	this->my_init();
}

CPMINSQ::~CPMINSQ()
{

}
