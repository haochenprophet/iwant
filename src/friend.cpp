#include "friend.h"
int Cfriend::my_init(void *p)
{
	this->name = "Cfriend";
	this->alias = "friend";
	return 0;
}

Cfriend::Cfriend()
{
	this->my_init();
}
