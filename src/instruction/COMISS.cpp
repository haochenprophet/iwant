#include "COMISS.h"
int CCOMISS::my_init(void *p)
{
	this->name = "CCOMISS";
	this->alias = "COMISS";
	return 0;
}

CCOMISS::CCOMISS()
{
	this->my_init();
}

CCOMISS::~CCOMISS()
{

}
