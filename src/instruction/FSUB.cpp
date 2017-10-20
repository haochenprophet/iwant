#include "FSUB.h"
int CFSUB::my_init(void *p)
{
	this->name = "CFSUB";
	this->alias = "FSUB";
	return 0;
}

CFSUB::CFSUB()
{
	this->my_init();
}

CFSUB::~CFSUB()
{

}
