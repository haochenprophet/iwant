#include "thread_local.h"
int Cthread_local::my_init(void *p)
{
	this->name = "Cthread_local";
	this->alias = "thread_local";
	return 0;
}

Cthread_local::Cthread_local()
{
	this->my_init();
}
