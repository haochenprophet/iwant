#include "RDFSBASE.h"
int CRDFSBASE::my_init(void *p)
{
	this->name = "CRDFSBASE";
	this->alias = "RDFSBASE";
	return 0;
}

CRDFSBASE::CRDFSBASE()
{
	this->my_init();
}

CRDFSBASE::~CRDFSBASE()
{

}
