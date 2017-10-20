#include "BNDLDX.h"
int CBNDLDX::my_init(void *p)
{
	this->name = "CBNDLDX";
	this->alias = "BNDLDX";
	return 0;
}

CBNDLDX::CBNDLDX()
{
	this->my_init();
}

CBNDLDX::~CBNDLDX()
{

}
