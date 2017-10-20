#include "MOVLPD.h"
int CMOVLPD::my_init(void *p)
{
	this->name = "CMOVLPD";
	this->alias = "MOVLPD";
	return 0;
}

CMOVLPD::CMOVLPD()
{
	this->my_init();
}

CMOVLPD::~CMOVLPD()
{

}
