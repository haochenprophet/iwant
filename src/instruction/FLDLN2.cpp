#include "FLDLN2.h"
int CFLDLN2::my_init(void *p)
{
	this->name = "CFLDLN2";
	this->alias = "FLDLN2";
	return 0;
}

CFLDLN2::CFLDLN2()
{
	this->my_init();
}

CFLDLN2::~CFLDLN2()
{

}
