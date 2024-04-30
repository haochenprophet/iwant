#include "home_add.h"
int Chome_add::my_init(void *p)
{
	this->name = "Chome_add";
	this->alias = "home_add";
	return 0;
}

Chome_add::Chome_add()
{
	this->my_init();
}

Chome_add::~Chome_add()
{

}

#ifndef HOME_ADD_TEST
#define HOME_ADD_TEST 0//1
#endif

#if HOME_ADD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
