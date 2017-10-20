#include "VPERM2F128.h"
int CVPERM2F128::my_init(void *p)
{
	this->name = "CVPERM2F128";
	this->alias = "VPERM2F128";
	return 0;
}

CVPERM2F128::CVPERM2F128()
{
	this->my_init();
}

CVPERM2F128::~CVPERM2F128()
{

}
