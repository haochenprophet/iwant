#include "LOOPcc.h"
int CLOOPcc::my_init(void *p)
{
	this->name = "CLOOPcc";
	this->alias = "LOOPcc";
	return 0;
}

CLOOPcc::CLOOPcc()
{
	this->my_init();
}

CLOOPcc::~CLOOPcc()
{

}
