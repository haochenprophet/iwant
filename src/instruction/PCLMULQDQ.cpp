#include "PCLMULQDQ.h"
int CPCLMULQDQ::my_init(void *p)
{
	this->name = "CPCLMULQDQ";
	this->alias = "PCLMULQDQ";
	return 0;
}

CPCLMULQDQ::CPCLMULQDQ()
{
	this->my_init();
}

CPCLMULQDQ::~CPCLMULQDQ()
{

}
