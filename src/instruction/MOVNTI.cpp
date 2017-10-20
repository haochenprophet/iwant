#include "MOVNTI.h"
int CMOVNTI::my_init(void *p)
{
	this->name = "CMOVNTI";
	this->alias = "MOVNTI";
	return 0;
}

CMOVNTI::CMOVNTI()
{
	this->my_init();
}

CMOVNTI::~CMOVNTI()
{

}
