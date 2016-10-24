#include "new.h"

Cnew::Cnew()
{
	this->name = "Cnew";
	this->alias = "new";
}

int Cnew::func(void *p)//p->in --want new size  out ,is *// 
{
	Cparameter *pm=(Cparameter *)p;//pm->size ==new size;

	try{
		pm->out =(void *)new char[pm->size];//
	}
	catch(...)//fail
	{
		pm->out=NULL;
		return 0;
	}

	return pm->size;
}
