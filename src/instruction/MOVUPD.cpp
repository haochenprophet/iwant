#include "MOVUPD.h"
int CMOVUPD::my_init(void *p)
{
	this->name = "CMOVUPD";
	this->alias = "MOVUPD";
	return 0;
}

CMOVUPD::CMOVUPD()
{
	this->my_init();
}

CMOVUPD::~CMOVUPD()
{

}
