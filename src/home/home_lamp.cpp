#include "home_lamp.h"
int Chome_lamp::my_init(void *p)
{
	this->name = "Chome_lamp";
	this->alias = "home_lamp";
	return 0;
}

Chome_lamp::Chome_lamp()
{
	this->my_init();
}

Chome_lamp::~Chome_lamp()
{

}

#ifndef HOME_LAMP_TEST
#define HOME_LAMP_TEST 0//1
#endif

#if HOME_LAMP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
