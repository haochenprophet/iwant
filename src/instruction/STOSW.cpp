#include "STOSW.h"
int CSTOSW::my_init(void *p)
{
	this->name = "CSTOSW";
	this->alias = "STOSW";
	return 0;
}

CSTOSW::CSTOSW()
{
	this->my_init();
}

CSTOSW::~CSTOSW()
{

}
