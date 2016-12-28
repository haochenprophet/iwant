#include "boolean.h"
int Cboolean::my_init(void *p)
{
	this->name = "Cboolean";
	this->alias = "boolean";
	return 0;
}

Cboolean::Cboolean()
{
	this->my_init();
}
