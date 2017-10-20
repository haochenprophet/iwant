#include "WAIT.h"
int CWAIT::my_init(void *p)
{
	this->name = "CWAIT";
	this->alias = "WAIT";
	return 0;
}

CWAIT::CWAIT()
{
	this->my_init();
}

CWAIT::~CWAIT()
{

}
