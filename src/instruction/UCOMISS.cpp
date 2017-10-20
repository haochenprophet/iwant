#include "UCOMISS.h"
int CUCOMISS::my_init(void *p)
{
	this->name = "CUCOMISS";
	this->alias = "UCOMISS";
	return 0;
}

CUCOMISS::CUCOMISS()
{
	this->my_init();
}

CUCOMISS::~CUCOMISS()
{

}
