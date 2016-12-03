#include "comment.h"
int Ccomment::my_init(void *p)
{
	this->name = "Ccomment";
	this->alias = "comment";
	return 0;
}

Ccomment::Ccomment()
{
	this->my_init();
}
