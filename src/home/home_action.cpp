#include "home_action.h"
int Chome_action::my_init(void *p)
{
	this->name = "Chome_action";
	this->alias = "home_action";
	return 0;
}

Chome_action::Chome_action()
{
	this->my_init();
}

Chome_action::~Chome_action()
{

}

#ifndef HOME_ACTION_TEST
#define HOME_ACTION_TEST 0//1
#endif

#if HOME_ACTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
