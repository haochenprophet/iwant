#include "KNOTD.h"
int CKNOTD::my_init(void *p)
{
	this->name = "CKNOTD";
	this->alias = "KNOTD";
	return 0;
}

CKNOTD::CKNOTD()
{
	this->my_init();
}

CKNOTD::~CKNOTD()
{

}
