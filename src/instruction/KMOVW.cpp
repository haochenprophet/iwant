#include "KMOVW.h"
int CKMOVW::my_init(void *p)
{
	this->name = "CKMOVW";
	this->alias = "KMOVW";
	return 0;
}

CKMOVW::CKMOVW()
{
	this->my_init();
}

CKMOVW::~CKMOVW()
{

}
