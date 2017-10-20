#include "MOVNTDQA.h"
int CMOVNTDQA::my_init(void *p)
{
	this->name = "CMOVNTDQA";
	this->alias = "MOVNTDQA";
	return 0;
}

CMOVNTDQA::CMOVNTDQA()
{
	this->my_init();
}

CMOVNTDQA::~CMOVNTDQA()
{

}
