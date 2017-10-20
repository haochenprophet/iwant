#include "SUBSD.h"
int CSUBSD::my_init(void *p)
{
	this->name = "CSUBSD";
	this->alias = "SUBSD";
	return 0;
}

CSUBSD::CSUBSD()
{
	this->my_init();
}

CSUBSD::~CSUBSD()
{

}
