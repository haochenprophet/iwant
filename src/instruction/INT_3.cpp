#include "INT_3.h"
int CINT_3::my_init(void *p)
{
	this->name = "CINT_3";
	this->alias = "INT_3";
	return 0;
}

CINT_3::CINT_3()
{
	this->my_init();
}

CINT_3::~CINT_3()
{

}
