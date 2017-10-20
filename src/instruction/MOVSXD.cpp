#include "MOVSXD.h"
int CMOVSXD::my_init(void *p)
{
	this->name = "CMOVSXD";
	this->alias = "MOVSXD";
	return 0;
}

CMOVSXD::CMOVSXD()
{
	this->my_init();
}

CMOVSXD::~CMOVSXD()
{

}
