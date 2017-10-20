#include "ANDNPS.h"
int CANDNPS::my_init(void *p)
{
	this->name = "CANDNPS";
	this->alias = "ANDNPS";
	return 0;
}

CANDNPS::CANDNPS()
{
	this->my_init();
}

CANDNPS::~CANDNPS()
{

}
