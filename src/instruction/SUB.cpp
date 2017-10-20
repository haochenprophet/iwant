#include "SUB.h"
int CSUB::my_init(void *p)
{
	this->name = "CSUB";
	this->alias = "SUB";
	return 0;
}

CSUB::CSUB()
{
	this->my_init();
}

CSUB::~CSUB()
{

}
