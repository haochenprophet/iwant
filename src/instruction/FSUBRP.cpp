#include "FSUBRP.h"
int CFSUBRP::my_init(void *p)
{
	this->name = "CFSUBRP";
	this->alias = "FSUBRP";
	return 0;
}

CFSUBRP::CFSUBRP()
{
	this->my_init();
}

CFSUBRP::~CFSUBRP()
{

}
