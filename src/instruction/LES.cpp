#include "LES.h"
int CLES::my_init(void *p)
{
	this->name = "CLES";
	this->alias = "LES";
	return 0;
}

CLES::CLES()
{
	this->my_init();
}

CLES::~CLES()
{

}
