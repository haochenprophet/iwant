#include "CMPXCHG.h"
int CCMPXCHG::my_init(void *p)
{
	this->name = "CCMPXCHG";
	this->alias = "CMPXCHG";
	return 0;
}

CCMPXCHG::CCMPXCHG()
{
	this->my_init();
}

CCMPXCHG::~CCMPXCHG()
{

}
