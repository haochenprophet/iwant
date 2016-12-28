#include "thread.h"
int Cthread::my_init(void *p)
{
	this->name = "Cthread";
	this->alias = "thread";
	return 0;
}

Cthread::Cthread()
{
	this->my_init();
}
