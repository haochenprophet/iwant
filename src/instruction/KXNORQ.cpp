#include "KXNORQ.h"
int CKXNORQ::my_init(void *p)
{
	this->name = "CKXNORQ";
	this->alias = "KXNORQ";
	return 0;
}

CKXNORQ::CKXNORQ()
{
	this->my_init();
}

CKXNORQ::~CKXNORQ()
{

}
