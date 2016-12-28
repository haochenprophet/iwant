#include "for_each_in.h"
int Cfor_each_in::my_init(void *p)
{
	this->name = "Cfor_each_in";
	this->alias = "for_each_in";
	return 0;
}

Cfor_each_in::Cfor_each_in()
{
	this->my_init();
}
