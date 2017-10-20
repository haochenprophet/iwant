#include "ROUNDSD.h"
int CROUNDSD::my_init(void *p)
{
	this->name = "CROUNDSD";
	this->alias = "ROUNDSD";
	return 0;
}

CROUNDSD::CROUNDSD()
{
	this->my_init();
}

CROUNDSD::~CROUNDSD()
{

}
