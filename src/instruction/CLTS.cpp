#include "CLTS.h"
int CCLTS::my_init(void *p)
{
	this->name = "CCLTS";
	this->alias = "CLTS";
	return 0;
}

CCLTS::CCLTS()
{
	this->my_init();
}

CCLTS::~CCLTS()
{

}
