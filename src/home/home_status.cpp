#include "home_status.h"
int Chome_status::my_init(void *p)
{
	this->name = "Chome_status";
	this->alias = "home_status";
	return 0;
}

Chome_status::Chome_status()
{
	this->my_init();
}

Chome_status::~Chome_status()
{

}

#ifndef HOME_STATUS_TEST
#define HOME_STATUS_TEST 0//1
#endif

#if HOME_STATUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
