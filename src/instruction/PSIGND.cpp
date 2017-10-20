#include "PSIGND.h"
int CPSIGND::my_init(void *p)
{
	this->name = "CPSIGND";
	this->alias = "PSIGND";
	return 0;
}

CPSIGND::CPSIGND()
{
	this->my_init();
}

CPSIGND::~CPSIGND()
{

}
