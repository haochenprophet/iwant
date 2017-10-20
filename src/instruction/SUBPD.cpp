#include "SUBPD.h"
int CSUBPD::my_init(void *p)
{
	this->name = "CSUBPD";
	this->alias = "SUBPD";
	return 0;
}

CSUBPD::CSUBPD()
{
	this->my_init();
}

CSUBPD::~CSUBPD()
{

}
