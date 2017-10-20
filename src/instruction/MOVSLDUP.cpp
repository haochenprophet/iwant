#include "MOVSLDUP.h"
int CMOVSLDUP::my_init(void *p)
{
	this->name = "CMOVSLDUP";
	this->alias = "MOVSLDUP";
	return 0;
}

CMOVSLDUP::CMOVSLDUP()
{
	this->my_init();
}

CMOVSLDUP::~CMOVSLDUP()
{

}
