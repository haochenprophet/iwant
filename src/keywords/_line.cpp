#include "_line.h"
int C_line::my_init(void *p)
{
	this->name = "C_line";
	this->alias = "_line";
	return 0;
}

C_line::C_line()
{
	this->my_init();
}
