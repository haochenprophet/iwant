#include "KXNORD.h"
int CKXNORD::my_init(void *p)
{
	this->name = "CKXNORD";
	this->alias = "KXNORD";
	return 0;
}

CKXNORD::CKXNORD()
{
	this->my_init();
}

CKXNORD::~CKXNORD()
{

}
