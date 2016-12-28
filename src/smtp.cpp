#include "smtp.h"
int Csmtp::my_init(void *p)
{
	this->name = "Csmtp";
	this->alias = "smtp";
	return 0;
}

Csmtp::Csmtp()
{
	this->my_init();
}
