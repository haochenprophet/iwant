#include "friend_as.h"
int Cfriend_as::my_init(void *p)
{
	this->name = "Cfriend_as";
	this->alias = "friend_as";
	return 0;
}

Cfriend_as::Cfriend_as()
{
	this->my_init();
}
