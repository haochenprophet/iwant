#include "INSB.h"
int CINSB::my_init(void *p)
{
	this->name = "CINSB";
	this->alias = "INSB";
	return 0;
}

CINSB::CINSB()
{
	this->my_init();
}

CINSB::~CINSB()
{

}
