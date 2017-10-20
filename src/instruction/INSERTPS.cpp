#include "INSERTPS.h"
int CINSERTPS::my_init(void *p)
{
	this->name = "CINSERTPS";
	this->alias = "INSERTPS";
	return 0;
}

CINSERTPS::CINSERTPS()
{
	this->my_init();
}

CINSERTPS::~CINSERTPS()
{

}
