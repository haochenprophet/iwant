#include "RDPMC.h"
int CRDPMC::my_init(void *p)
{
	this->name = "CRDPMC";
	this->alias = "RDPMC";
	return 0;
}

CRDPMC::CRDPMC()
{
	this->my_init();
}

CRDPMC::~CRDPMC()
{

}
