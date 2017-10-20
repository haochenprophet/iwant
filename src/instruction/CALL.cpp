#include "CALL.h"
int CCALL::my_init(void *p)
{
	this->name = "CCALL";
	this->alias = "CALL";
	return 0;
}

CCALL::CCALL()
{
	this->my_init();
}

CCALL::~CCALL()
{

}
