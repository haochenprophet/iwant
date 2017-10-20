#include "MOVAPS.h"
int CMOVAPS::my_init(void *p)
{
	this->name = "CMOVAPS";
	this->alias = "MOVAPS";
	return 0;
}

CMOVAPS::CMOVAPS()
{
	this->my_init();
}

CMOVAPS::~CMOVAPS()
{

}
