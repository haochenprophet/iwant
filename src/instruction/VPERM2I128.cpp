#include "VPERM2I128.h"
int CVPERM2I128::my_init(void *p)
{
	this->name = "CVPERM2I128";
	this->alias = "VPERM2I128";
	return 0;
}

CVPERM2I128::CVPERM2I128()
{
	this->my_init();
}

CVPERM2I128::~CVPERM2I128()
{

}
