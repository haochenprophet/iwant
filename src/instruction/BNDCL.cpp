#include "BNDCL.h"
int CBNDCL::my_init(void *p)
{
	this->name = "CBNDCL";
	this->alias = "BNDCL";
	return 0;
}

CBNDCL::CBNDCL()
{
	this->my_init();
}

CBNDCL::~CBNDCL()
{

}
