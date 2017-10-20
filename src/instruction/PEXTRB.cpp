#include "PEXTRB.h"
int CPEXTRB::my_init(void *p)
{
	this->name = "CPEXTRB";
	this->alias = "PEXTRB";
	return 0;
}

CPEXTRB::CPEXTRB()
{
	this->my_init();
}

CPEXTRB::~CPEXTRB()
{

}
