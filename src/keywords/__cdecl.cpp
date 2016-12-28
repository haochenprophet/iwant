#include "__cdecl.h"
int C__cdecl::my_init(void *p)
{
	this->name = "C__cdecl";
	this->alias = "__cdecl";
	return 0;
}

C__cdecl::C__cdecl()
{
	this->my_init();
}
