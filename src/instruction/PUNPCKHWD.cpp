#include "PUNPCKHWD.h"
int CPUNPCKHWD::my_init(void *p)
{
	this->name = "CPUNPCKHWD";
	this->alias = "PUNPCKHWD";
	return 0;
}

CPUNPCKHWD::CPUNPCKHWD()
{
	this->my_init();
}

CPUNPCKHWD::~CPUNPCKHWD()
{

}
