#include "__if_not_exists.h"
int C__if_not_exists::my_init(void *p)
{
	this->name = "C__if_not_exists";
	this->alias = "__if_not_exists";
	return 0;
}

C__if_not_exists::C__if_not_exists()
{
	this->my_init();
}
