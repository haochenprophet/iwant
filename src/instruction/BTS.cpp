#include "BTS.h"
int CBTS::my_init(void *p)
{
	this->name = "CBTS";
	this->alias = "BTS";
	return 0;
}

CBTS::CBTS()
{
	this->my_init();
}

CBTS::~CBTS()
{

}
