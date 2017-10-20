#include "CLC.h"
int CCLC::my_init(void *p)
{
	this->name = "CCLC";
	this->alias = "CLC";
	return 0;
}

CCLC::CCLC()
{
	this->my_init();
}

CCLC::~CCLC()
{

}
