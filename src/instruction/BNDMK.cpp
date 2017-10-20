#include "BNDMK.h"
int CBNDMK::my_init(void *p)
{
	this->name = "CBNDMK";
	this->alias = "BNDMK";
	return 0;
}

CBNDMK::CBNDMK()
{
	this->my_init();
}

CBNDMK::~CBNDMK()
{

}
