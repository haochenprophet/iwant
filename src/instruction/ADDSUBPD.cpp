#include "ADDSUBPD.h"
int CADDSUBPD::my_init(void *p)
{
	this->name = "CADDSUBPD";
	this->alias = "ADDSUBPD";
	return 0;
}

CADDSUBPD::CADDSUBPD()
{
	this->my_init();
}

CADDSUBPD::~CADDSUBPD()
{

}
