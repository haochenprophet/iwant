#include "__pin.h"
int C__pin::my_init(void *p)
{
	this->name = "C__pin";
	this->alias = "__pin";
	return 0;
}

C__pin::C__pin()
{
	this->my_init();
}
