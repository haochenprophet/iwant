#include "KXORB.h"
int CKXORB::my_init(void *p)
{
	this->name = "CKXORB";
	this->alias = "KXORB";
	return 0;
}

CKXORB::CKXORB()
{
	this->my_init();
}

CKXORB::~CKXORB()
{

}
