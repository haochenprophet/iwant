#include "home_control.h"
int Chome_control::my_init(void *p)
{
	this->name = "Chome_control";
	this->alias = "home_control";
	return 0;
}

Chome_control::Chome_control()
{
	this->my_init();
}

Chome_control::~Chome_control()
{

}

#ifndef HOME_CONTROL_TEST
#define HOME_CONTROL_TEST 0//1
#endif

#if HOME_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
