#include "__super.h"
int C__super::my_init(void *p)
{
	this->name = "C__super";
	this->alias = "__super";
	return 0;
}

C__super::C__super()
{
	this->my_init();
}
