#include "LZCNT.h"
int CLZCNT::my_init(void *p)
{
	this->name = "CLZCNT";
	this->alias = "LZCNT";
	return 0;
}

CLZCNT::CLZCNT()
{
	this->my_init();
}

CLZCNT::~CLZCNT()
{

}
