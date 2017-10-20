#include "XSAVEC.h"
int CXSAVEC::my_init(void *p)
{
	this->name = "CXSAVEC";
	this->alias = "XSAVEC";
	return 0;
}

CXSAVEC::CXSAVEC()
{
	this->my_init();
}

CXSAVEC::~CXSAVEC()
{

}
