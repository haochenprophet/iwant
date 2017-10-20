#include "WBINVD.h"
int CWBINVD::my_init(void *p)
{
	this->name = "CWBINVD";
	this->alias = "WBINVD";
	return 0;
}

CWBINVD::CWBINVD()
{
	this->my_init();
}

CWBINVD::~CWBINVD()
{

}
