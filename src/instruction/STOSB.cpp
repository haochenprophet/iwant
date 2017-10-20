#include "STOSB.h"
int CSTOSB::my_init(void *p)
{
	this->name = "CSTOSB";
	this->alias = "STOSB";
	return 0;
}

CSTOSB::CSTOSB()
{
	this->my_init();
}

CSTOSB::~CSTOSB()
{

}
