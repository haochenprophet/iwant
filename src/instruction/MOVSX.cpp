#include "MOVSX.h"
int CMOVSX::my_init(void *p)
{
	this->name = "CMOVSX";
	this->alias = "MOVSX";
	return 0;
}

CMOVSX::CMOVSX()
{
	this->my_init();
}

CMOVSX::~CMOVSX()
{

}
