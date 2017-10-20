#include "AAS.h"
int CAAS::my_init(void *p)
{
	this->name = "CAAS";
	this->alias = "AAS";
	return 0;
}

CAAS::CAAS()
{
	this->my_init();
}

CAAS::~CAAS()
{

}
