#include "PALIGNR.h"
int CPALIGNR::my_init(void *p)
{
	this->name = "CPALIGNR";
	this->alias = "PALIGNR";
	return 0;
}

CPALIGNR::CPALIGNR()
{
	this->my_init();
}

CPALIGNR::~CPALIGNR()
{

}
