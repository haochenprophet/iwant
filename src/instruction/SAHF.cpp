#include "SAHF.h"
int CSAHF::my_init(void *p)
{
	this->name = "CSAHF";
	this->alias = "SAHF";
	return 0;
}

CSAHF::CSAHF()
{
	this->my_init();
}

CSAHF::~CSAHF()
{

}
