#include "SCASB.h"
int CSCASB::my_init(void *p)
{
	this->name = "CSCASB";
	this->alias = "SCASB";
	return 0;
}

CSCASB::CSCASB()
{
	this->my_init();
}

CSCASB::~CSCASB()
{

}
