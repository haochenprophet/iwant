#include "PEXTRQ.h"
int CPEXTRQ::my_init(void *p)
{
	this->name = "CPEXTRQ";
	this->alias = "PEXTRQ";
	return 0;
}

CPEXTRQ::CPEXTRQ()
{
	this->my_init();
}

CPEXTRQ::~CPEXTRQ()
{

}
