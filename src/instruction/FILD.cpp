#include "FILD.h"
int CFILD::my_init(void *p)
{
	this->name = "CFILD";
	this->alias = "FILD";
	return 0;
}

CFILD::CFILD()
{
	this->my_init();
}

CFILD::~CFILD()
{

}
