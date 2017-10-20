#include "PADDD.h"
int CPADDD::my_init(void *p)
{
	this->name = "CPADDD";
	this->alias = "PADDD";
	return 0;
}

CPADDD::CPADDD()
{
	this->my_init();
}

CPADDD::~CPADDD()
{

}
