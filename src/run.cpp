#include "run.h"

Crun::Crun()
{
	this->name = "Crun";
	this->alias = "run";
}

int Crun::func(void *p)
{
	if(!p) return -1;
	return system((char*)p);
}