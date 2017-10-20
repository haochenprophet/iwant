#include "ANDPS.h"
int CANDPS::my_init(void *p)
{
	this->name = "CANDPS";
	this->alias = "ANDPS";
	return 0;
}

CANDPS::CANDPS()
{
	this->my_init();
}

CANDPS::~CANDPS()
{

}
