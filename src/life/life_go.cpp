#include "life_go.h"
int Clife_go::my_init(void *p)
{
	this->name = "Clife_go";
	this->alias = "life_go";
	return 0;
}

Clife_go::Clife_go()
{
	this->my_init();
}

Clife_go::~Clife_go()
{

}

#ifndef LIFE_GO_TEST
#define LIFE_GO_TEST 0//1
#endif

#if LIFE_GO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
