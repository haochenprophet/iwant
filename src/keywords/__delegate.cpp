#include "__delegate.h"
int C__delegate::my_init(void *p)
{
	this->name = "C__delegate";
	this->alias = "__delegate";
	return 0;
}

C__delegate::C__delegate()
{
	this->my_init();
}
