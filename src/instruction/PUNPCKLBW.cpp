#include "PUNPCKLBW.h"
int CPUNPCKLBW::my_init(void *p)
{
	this->name = "CPUNPCKLBW";
	this->alias = "PUNPCKLBW";
	return 0;
}

CPUNPCKLBW::CPUNPCKLBW()
{
	this->my_init();
}

CPUNPCKLBW::~CPUNPCKLBW()
{

}
