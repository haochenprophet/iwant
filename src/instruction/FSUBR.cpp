#include "FSUBR.h"
int CFSUBR::my_init(void *p)
{
	this->name = "CFSUBR";
	this->alias = "FSUBR";
	return 0;
}

CFSUBR::CFSUBR()
{
	this->my_init();
}

CFSUBR::~CFSUBR()
{

}
