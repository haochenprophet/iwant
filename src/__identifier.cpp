#include "__identifier.h"
int C__identifier::my_init(void *p)
{
	this->name = "C__identifier";
	this->alias = "__identifier";
	return 0;
}

C__identifier::C__identifier()
{
	this->my_init();
}
