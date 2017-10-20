#include "KXNORB.h"
int CKXNORB::my_init(void *p)
{
	this->name = "CKXNORB";
	this->alias = "KXNORB";
	return 0;
}

CKXNORB::CKXNORB()
{
	this->my_init();
}

CKXNORB::~CKXNORB()
{

}
