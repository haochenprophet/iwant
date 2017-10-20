#include "KXNORW.h"
int CKXNORW::my_init(void *p)
{
	this->name = "CKXNORW";
	this->alias = "KXNORW";
	return 0;
}

CKXNORW::CKXNORW()
{
	this->my_init();
}

CKXNORW::~CKXNORW()
{

}
