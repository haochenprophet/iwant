#include "FDIVP.h"
int CFDIVP::my_init(void *p)
{
	this->name = "CFDIVP";
	this->alias = "FDIVP";
	return 0;
}

CFDIVP::CFDIVP()
{
	this->my_init();
}

CFDIVP::~CFDIVP()
{

}
