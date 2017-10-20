#include "MOVD.h"
int CMOVD::my_init(void *p)
{
	this->name = "CMOVD";
	this->alias = "MOVD";
	return 0;
}

CMOVD::CMOVD()
{
	this->my_init();
}

CMOVD::~CMOVD()
{

}
