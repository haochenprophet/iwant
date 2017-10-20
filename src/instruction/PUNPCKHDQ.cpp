#include "PUNPCKHDQ.h"
int CPUNPCKHDQ::my_init(void *p)
{
	this->name = "CPUNPCKHDQ";
	this->alias = "PUNPCKHDQ";
	return 0;
}

CPUNPCKHDQ::CPUNPCKHDQ()
{
	this->my_init();
}

CPUNPCKHDQ::~CPUNPCKHDQ()
{

}
