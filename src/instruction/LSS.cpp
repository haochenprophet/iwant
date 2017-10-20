#include "LSS.h"
int CLSS::my_init(void *p)
{
	this->name = "CLSS";
	this->alias = "LSS";
	return 0;
}

CLSS::CLSS()
{
	this->my_init();
}

CLSS::~CLSS()
{

}
