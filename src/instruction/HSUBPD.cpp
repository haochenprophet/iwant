#include "HSUBPD.h"
int CHSUBPD::my_init(void *p)
{
	this->name = "CHSUBPD";
	this->alias = "HSUBPD";
	return 0;
}

CHSUBPD::CHSUBPD()
{
	this->my_init();
}

CHSUBPD::~CHSUBPD()
{

}
