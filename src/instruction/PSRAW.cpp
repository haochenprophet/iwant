#include "PSRAW.h"
int CPSRAW::my_init(void *p)
{
	this->name = "CPSRAW";
	this->alias = "PSRAW";
	return 0;
}

CPSRAW::CPSRAW()
{
	this->my_init();
}

CPSRAW::~CPSRAW()
{

}
