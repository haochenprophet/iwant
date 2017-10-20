#include "ORPD.h"
int CORPD::my_init(void *p)
{
	this->name = "CORPD";
	this->alias = "ORPD";
	return 0;
}

CORPD::CORPD()
{
	this->my_init();
}

CORPD::~CORPD()
{

}
