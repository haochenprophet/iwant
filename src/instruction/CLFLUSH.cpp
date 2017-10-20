#include "CLFLUSH.h"
int CCLFLUSH::my_init(void *p)
{
	this->name = "CCLFLUSH";
	this->alias = "CLFLUSH";
	return 0;
}

CCLFLUSH::CCLFLUSH()
{
	this->my_init();
}

CCLFLUSH::~CCLFLUSH()
{

}
