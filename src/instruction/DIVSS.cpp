#include "DIVSS.h"
int CDIVSS::my_init(void *p)
{
	this->name = "CDIVSS";
	this->alias = "DIVSS";
	return 0;
}

CDIVSS::CDIVSS()
{
	this->my_init();
}

CDIVSS::~CDIVSS()
{

}
