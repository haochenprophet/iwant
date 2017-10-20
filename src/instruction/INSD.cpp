#include "INSD.h"
int CINSD::my_init(void *p)
{
	this->name = "CINSD";
	this->alias = "INSD";
	return 0;
}

CINSD::CINSD()
{
	this->my_init();
}

CINSD::~CINSD()
{

}
