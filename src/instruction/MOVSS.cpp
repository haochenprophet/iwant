#include "MOVSS.h"
int CMOVSS::my_init(void *p)
{
	this->name = "CMOVSS";
	this->alias = "MOVSS";
	return 0;
}

CMOVSS::CMOVSS()
{
	this->my_init();
}

CMOVSS::~CMOVSS()
{

}
