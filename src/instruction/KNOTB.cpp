#include "KNOTB.h"
int CKNOTB::my_init(void *p)
{
	this->name = "CKNOTB";
	this->alias = "KNOTB";
	return 0;
}

CKNOTB::CKNOTB()
{
	this->my_init();
}

CKNOTB::~CKNOTB()
{

}
