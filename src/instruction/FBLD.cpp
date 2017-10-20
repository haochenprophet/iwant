#include "FBLD.h"
int CFBLD::my_init(void *p)
{
	this->name = "CFBLD";
	this->alias = "FBLD";
	return 0;
}

CFBLD::CFBLD()
{
	this->my_init();
}

CFBLD::~CFBLD()
{

}
