#include "RDGSBASE.h"
int CRDGSBASE::my_init(void *p)
{
	this->name = "CRDGSBASE";
	this->alias = "RDGSBASE";
	return 0;
}

CRDGSBASE::CRDGSBASE()
{
	this->my_init();
}

CRDGSBASE::~CRDGSBASE()
{

}
