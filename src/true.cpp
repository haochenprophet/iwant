#include "True.h"
int CTrue::my_init(void *p)
{
	this->name = "CTrue";
	this->alias = "True";
	return 0;
}

CTrue::CTrue()
{
	this->my_init();
}
