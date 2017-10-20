#include "SCASW.h"
int CSCASW::my_init(void *p)
{
	this->name = "CSCASW";
	this->alias = "SCASW";
	return 0;
}

CSCASW::CSCASW()
{
	this->my_init();
}

CSCASW::~CSCASW()
{

}
