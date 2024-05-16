#include "rocket_control.h"
int Crocket_control::my_init(void *p)
{
	this->name = "Crocket_control";
	this->alias = "rocket_control";
	return 0;
}

Crocket_control::Crocket_control()
{
	this->my_init();
}

Crocket_control::~Crocket_control()
{

}

#ifndef ROCKET_CONTROL_TEST
#define ROCKET_CONTROL_TEST 0//1
#endif

#if ROCKET_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
