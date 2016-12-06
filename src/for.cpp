#include "for.h"
int Cfor::my_init(void *p)
{
	this->name = "Cfor";
	this->alias = "for";
	return 0;
}

Cfor::Cfor()
{
	this->my_init();
}
