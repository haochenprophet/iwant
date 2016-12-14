#include "makefile.h"
int Cmakefile::my_init(void *p)
{
	this->name = "Cmakefile";
	this->alias = "makefile";
	return 0;
}

Cmakefile::Cmakefile()
{
	this->my_init();
}
