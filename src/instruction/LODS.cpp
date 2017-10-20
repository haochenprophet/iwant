#include "LODS.h"
int CLODS::my_init(void *p)
{
	this->name = "CLODS";
	this->alias = "LODS";
	return 0;
}

CLODS::CLODS()
{
	this->my_init();
}

CLODS::~CLODS()
{

}
