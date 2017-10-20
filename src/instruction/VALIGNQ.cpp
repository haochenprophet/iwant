#include "VALIGNQ.h"
int CVALIGNQ::my_init(void *p)
{
	this->name = "CVALIGNQ";
	this->alias = "VALIGNQ";
	return 0;
}

CVALIGNQ::CVALIGNQ()
{
	this->my_init();
}

CVALIGNQ::~CVALIGNQ()
{

}
