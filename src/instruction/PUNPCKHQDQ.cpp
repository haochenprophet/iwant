#include "PUNPCKHQDQ.h"
int CPUNPCKHQDQ::my_init(void *p)
{
	this->name = "CPUNPCKHQDQ";
	this->alias = "PUNPCKHQDQ";
	return 0;
}

CPUNPCKHQDQ::CPUNPCKHQDQ()
{
	this->my_init();
}

CPUNPCKHQDQ::~CPUNPCKHQDQ()
{

}
