#include "KXORQ.h"
int CKXORQ::my_init(void *p)
{
	this->name = "CKXORQ";
	this->alias = "KXORQ";
	return 0;
}

CKXORQ::CKXORQ()
{
	this->my_init();
}

CKXORQ::~CKXORQ()
{

}
