#include "FTST.h"
int CFTST::my_init(void *p)
{
	this->name = "CFTST";
	this->alias = "FTST";
	return 0;
}

CFTST::CFTST()
{
	this->my_init();
}

CFTST::~CFTST()
{

}
