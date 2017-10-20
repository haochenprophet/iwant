#include "TZCNT.h"
int CTZCNT::my_init(void *p)
{
	this->name = "CTZCNT";
	this->alias = "TZCNT";
	return 0;
}

CTZCNT::CTZCNT()
{
	this->my_init();
}

CTZCNT::~CTZCNT()
{

}
