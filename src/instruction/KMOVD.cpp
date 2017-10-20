#include "KMOVD.h"
int CKMOVD::my_init(void *p)
{
	this->name = "CKMOVD";
	this->alias = "KMOVD";
	return 0;
}

CKMOVD::CKMOVD()
{
	this->my_init();
}

CKMOVD::~CKMOVD()
{

}
