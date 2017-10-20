#include "BNDMOV.h"
int CBNDMOV::my_init(void *p)
{
	this->name = "CBNDMOV";
	this->alias = "BNDMOV";
	return 0;
}

CBNDMOV::CBNDMOV()
{
	this->my_init();
}

CBNDMOV::~CBNDMOV()
{

}
