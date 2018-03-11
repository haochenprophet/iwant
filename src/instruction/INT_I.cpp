#include "INT_I.h"
int CINT::my_init(void *p)
{
	this->name = "CINT";
	this->alias = "INT";
	return 0;
}

CINT::CINT()
{
	this->my_init();
}

CINT::~CINT()
{

}
