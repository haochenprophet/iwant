#include "PEXTRW.h"
int CPEXTRW::my_init(void *p)
{
	this->name = "CPEXTRW";
	this->alias = "PEXTRW";
	return 0;
}

CPEXTRW::CPEXTRW()
{
	this->my_init();
}

CPEXTRW::~CPEXTRW()
{

}
