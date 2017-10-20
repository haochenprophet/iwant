#include "CMPSS.h"
int CCMPSS::my_init(void *p)
{
	this->name = "CCMPSS";
	this->alias = "CMPSS";
	return 0;
}

CCMPSS::CCMPSS()
{
	this->my_init();
}

CCMPSS::~CCMPSS()
{

}
