#include "export.h"
int Cexport::my_init(void *p)
{
	this->name = "Cexport";
	this->alias = "export";
	return 0;
}

Cexport::Cexport()
{
	this->my_init();
}
