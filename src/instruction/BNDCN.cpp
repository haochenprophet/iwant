#include "BNDCN.h"
int CBNDCN::my_init(void *p)
{
	this->name = "CBNDCN";
	this->alias = "BNDCN";
	return 0;
}

CBNDCN::CBNDCN()
{
	this->my_init();
}

CBNDCN::~CBNDCN()
{

}
