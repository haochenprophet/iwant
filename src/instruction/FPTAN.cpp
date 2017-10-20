#include "FPTAN.h"
int CFPTAN::my_init(void *p)
{
	this->name = "CFPTAN";
	this->alias = "FPTAN";
	return 0;
}

CFPTAN::CFPTAN()
{
	this->my_init();
}

CFPTAN::~CFPTAN()
{

}
