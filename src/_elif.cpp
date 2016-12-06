#include "_elif.h"
int C_elif::my_init(void *p)
{
	this->name = "C_elif";
	this->alias = "_elif";
	return 0;
}

C_elif::C_elif()
{
	this->my_init();
}
