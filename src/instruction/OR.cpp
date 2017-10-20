#include "OR.h"
int COR::my_init(void *p)
{
	this->name = "COR";
	this->alias = "OR";
	return 0;
}

COR::COR()
{
	this->my_init();
}

COR::~COR()
{

}
