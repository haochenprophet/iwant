#include "exit.h"

Cexit::Cexit()
{
	this->name = "Cexit";
	this->alias = "exit";
}

int Cexit::func(void *p)
{
	if(!p) exit(0);
	exit(*(int*)p);
}

void Cexit::exit_c(int status)
{
	exit(status);
}
