#include "SARX.h"
int CSARX::my_init(void *p)
{
	this->name = "CSARX";
	this->alias = "SARX";
	return 0;
}

CSARX::CSARX()
{
	this->my_init();
}

CSARX::~CSARX()
{

}
