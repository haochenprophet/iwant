#include "MOVUPS.h"
int CMOVUPS::my_init(void *p)
{
	this->name = "CMOVUPS";
	this->alias = "MOVUPS";
	return 0;
}

CMOVUPS::CMOVUPS()
{
	this->my_init();
}

CMOVUPS::~CMOVUPS()
{

}
