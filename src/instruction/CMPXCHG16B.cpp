#include "CMPXCHG16B.h"
int CCMPXCHG16B::my_init(void *p)
{
	this->name = "CCMPXCHG16B";
	this->alias = "CMPXCHG16B";
	return 0;
}

CCMPXCHG16B::CCMPXCHG16B()
{
	this->my_init();
}

CCMPXCHG16B::~CCMPXCHG16B()
{

}
