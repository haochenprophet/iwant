#include "_ifdef.h"
int C_ifdef::my_init(void *p)
{
	this->name = "C_ifdef";
	this->alias = "_ifdef";
	return 0;
}

C_ifdef::C_ifdef()
{
	this->my_init();
}
