#include "STOSQ.h"
int CSTOSQ::my_init(void *p)
{
	this->name = "CSTOSQ";
	this->alias = "STOSQ";
	return 0;
}

CSTOSQ::CSTOSQ()
{
	this->my_init();
}

CSTOSQ::~CSTOSQ()
{

}
