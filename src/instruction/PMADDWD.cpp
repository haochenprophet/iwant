#include "PMADDWD.h"
int CPMADDWD::my_init(void *p)
{
	this->name = "CPMADDWD";
	this->alias = "PMADDWD";
	return 0;
}

CPMADDWD::CPMADDWD()
{
	this->my_init();
}

CPMADDWD::~CPMADDWD()
{

}
