#include "MWAIT.h"
int CMWAIT::my_init(void *p)
{
	this->name = "CMWAIT";
	this->alias = "MWAIT";
	return 0;
}

CMWAIT::CMWAIT()
{
	this->my_init();
}

CMWAIT::~CMWAIT()
{

}
