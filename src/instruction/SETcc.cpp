#include "SETcc.h"
int CSETcc::my_init(void *p)
{
	this->name = "CSETcc";
	this->alias = "SETcc";
	return 0;
}

CSETcc::CSETcc()
{
	this->my_init();
}

CSETcc::~CSETcc()
{

}
