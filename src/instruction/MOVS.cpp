#include "MOVS.h"
int CMOVS::my_init(void *p)
{
	this->name = "CMOVS";
	this->alias = "MOVS";
	return 0;
}

CMOVS::CMOVS()
{
	this->my_init();
}

CMOVS::~CMOVS()
{

}
