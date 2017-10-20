#include "VERW.h"
int CVERW::my_init(void *p)
{
	this->name = "CVERW";
	this->alias = "VERW";
	return 0;
}

CVERW::CVERW()
{
	this->my_init();
}

CVERW::~CVERW()
{

}
