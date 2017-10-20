#include "PUNPCKLWD.h"
int CPUNPCKLWD::my_init(void *p)
{
	this->name = "CPUNPCKLWD";
	this->alias = "PUNPCKLWD";
	return 0;
}

CPUNPCKLWD::CPUNPCKLWD()
{
	this->my_init();
}

CPUNPCKLWD::~CPUNPCKLWD()
{

}
