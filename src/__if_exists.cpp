#include "__if_exists.h"
int C__if_exists::my_init(void *p)
{
	this->name = "C__if_exists";
	this->alias = "__if_exists";
	return 0;
}

C__if_exists::C__if_exists()
{
	this->my_init();
}
