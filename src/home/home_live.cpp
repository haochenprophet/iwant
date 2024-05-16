#include "home_live.h"
int Chome_live::my_init(void *p)
{
	this->name = "Chome_live";
	this->alias = "home_live";
	return 0;
}

Chome_live::Chome_live()
{
	this->my_init();
}

Chome_live::~Chome_live()
{

}

#ifndef HOME_LIVE_TEST
#define HOME_LIVE_TEST 0//1
#endif

#if HOME_LIVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
