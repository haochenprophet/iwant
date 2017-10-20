#include "LEA.h"
int CLEA::my_init(void *p)
{
	this->name = "CLEA";
	this->alias = "LEA";
	return 0;
}

CLEA::CLEA()
{
	this->my_init();
}

CLEA::~CLEA()
{

}
