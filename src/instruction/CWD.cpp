#include "CWD.h"
int CCWD::my_init(void *p)
{
	this->name = "CCWD";
	this->alias = "CWD";
	return 0;
}

CCWD::CCWD()
{
	this->my_init();
}

CCWD::~CCWD()
{

}
