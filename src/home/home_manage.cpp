#include "home_manage.h"
int Chome_manage::my_init(void *p)
{
	this->name = "Chome_manage";
	this->alias = "home_manage";
	return 0;
}

Chome_manage::Chome_manage()
{
	this->my_init();
}

Chome_manage::~Chome_manage()
{

}

#ifndef HOME_MANAGE_TEST
#define HOME_MANAGE_TEST 0//1
#endif

#if HOME_MANAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
