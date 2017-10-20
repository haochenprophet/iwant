#include "MOVAPD.h"
int CMOVAPD::my_init(void *p)
{
	this->name = "CMOVAPD";
	this->alias = "MOVAPD";
	return 0;
}

CMOVAPD::CMOVAPD()
{
	this->my_init();
}

CMOVAPD::~CMOVAPD()
{

}
