#include "__declspec.h"
int C__declspec::my_init(void *p)
{
	this->name = "C__declspec";
	this->alias = "__declspec";
	return 0;
}

C__declspec::C__declspec()
{
	this->my_init();
}
