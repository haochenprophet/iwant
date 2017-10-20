#include "CLI.h"
int CCLI::my_init(void *p)
{
	this->name = "CCLI";
	this->alias = "CLI";
	return 0;
}

CCLI::CCLI()
{
	this->my_init();
}

CCLI::~CCLI()
{

}
