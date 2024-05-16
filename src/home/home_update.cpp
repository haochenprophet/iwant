#include "home_update.h"
int Chome_update::my_init(void *p)
{
	this->name = "Chome_update";
	this->alias = "home_update";
	return 0;
}

Chome_update::Chome_update()
{
	this->my_init();
}

Chome_update::~Chome_update()
{

}

#ifndef HOME_UPDATE_TEST
#define HOME_UPDATE_TEST 0//1
#endif

#if HOME_UPDATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
