#include "PUNPCKLDQ.h"
int CPUNPCKLDQ::my_init(void *p)
{
	this->name = "CPUNPCKLDQ";
	this->alias = "PUNPCKLDQ";
	return 0;
}

CPUNPCKLDQ::CPUNPCKLDQ()
{
	this->my_init();
}

CPUNPCKLDQ::~CPUNPCKLDQ()
{

}
