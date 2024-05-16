#include "home_go.h"
int Chome_go::my_init(void *p)
{
	this->name = "Chome_go";
	this->alias = "home_go";
	return 0;
}

Chome_go::Chome_go()
{
	this->my_init();
}

Chome_go::~Chome_go()
{

}

#ifndef HOME_GO_TEST
#define HOME_GO_TEST 0//1
#endif

#if HOME_GO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
