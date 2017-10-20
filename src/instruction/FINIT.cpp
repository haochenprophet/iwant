#include "FINIT.h"
int CFINIT::my_init(void *p)
{
	this->name = "CFINIT";
	this->alias = "FINIT";
	return 0;
}

CFINIT::CFINIT()
{
	this->my_init();
}

CFINIT::~CFINIT()
{

}
