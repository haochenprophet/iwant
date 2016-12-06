#include "import.h"
int Cimport::my_init(void *p)
{
	this->name = "Cimport";
	this->alias = "import";
	return 0;
}

Cimport::Cimport()
{
	this->my_init();
}
