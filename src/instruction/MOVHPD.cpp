#include "MOVHPD.h"
int CMOVHPD::my_init(void *p)
{
	this->name = "CMOVHPD";
	this->alias = "MOVHPD";
	return 0;
}

CMOVHPD::CMOVHPD()
{
	this->my_init();
}

CMOVHPD::~CMOVHPD()
{

}
