#include "SHL.h"
int CSHL::my_init(void *p)
{
	this->name = "CSHL";
	this->alias = "SHL";
	return 0;
}

CSHL::CSHL()
{
	this->my_init();
}

CSHL::~CSHL()
{

}
