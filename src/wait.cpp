#include "wait.h"
int Cwait::my_init(void *p)
{
	this->name = "Cwait";
	this->alias = "wait";
	return 0;
}

Cwait::Cwait()
{
	this->my_init();
}

Cwait::~Cwait()
{

}
