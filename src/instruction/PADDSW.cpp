#include "PADDSW.h"
int CPADDSW::my_init(void *p)
{
	this->name = "CPADDSW";
	this->alias = "PADDSW";
	return 0;
}

CPADDSW::CPADDSW()
{
	this->my_init();
}

CPADDSW::~CPADDSW()
{

}
