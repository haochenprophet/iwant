#include "ftp.h"
int Cftp::my_init(void *p)
{
	this->name = "Cftp";
	this->alias = "ftp";
	return 0;
}

Cftp::Cftp()
{
	this->my_init();
}
