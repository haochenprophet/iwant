#include "CMPXCHG8B.h"
int CCMPXCHG8B::my_init(void *p)
{
	this->name = "CCMPXCHG8B";
	this->alias = "CMPXCHG8B";
	return 0;
}

CCMPXCHG8B::CCMPXCHG8B()
{
	this->my_init();
}

CCMPXCHG8B::~CCMPXCHG8B()
{

}
