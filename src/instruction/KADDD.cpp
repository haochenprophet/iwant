#include "KADDD.h"
int CKADDD::my_init(void *p)
{
	this->name = "CKADDD";
	this->alias = "KADDD";
	return 0;
}

CKADDD::CKADDD()
{
	this->my_init();
}

CKADDD::~CKADDD()
{

}
