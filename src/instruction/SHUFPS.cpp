#include "SHUFPS.h"
int CSHUFPS::my_init(void *p)
{
	this->name = "CSHUFPS";
	this->alias = "SHUFPS";
	return 0;
}

CSHUFPS::CSHUFPS()
{
	this->my_init();
}

CSHUFPS::~CSHUFPS()
{

}
