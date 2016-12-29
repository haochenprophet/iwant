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

int Cwait::wait_key(void *p)
{
	return 0;
}

char * Cwait::wait_str(void *p)
{
	return nullptr;
}

long Cwait::wait_number(void *p)
{
	return 0;
}

double Cwait::wait_float(void *p)
{
	return 0;
}