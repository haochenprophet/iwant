#include "UD.h"
int CUD::my_init(void *p)
{
	this->name = "CUD";
	this->alias = "UD";
	return 0;
}

CUD::CUD()
{
	this->my_init();
}

CUD::~CUD()
{

}
