#include "control.h"
int Ccontrol::my_init(void *p)
{
	this->name = "Ccontrol";
	this->alias = "control";
	return 0;
}

Ccontrol::Ccontrol()
{
	this->my_init();
}

Ccontrol::~Ccontrol()
{

}

#ifndef CONTROL_TEST
#define CONTROL_TEST 0//1
#endif

#if CONTROL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
