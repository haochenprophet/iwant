#include "life_live.h"
int Clife_live::my_init(void *p)
{
	this->name = "Clife_live";
	this->alias = "life_live";
	return 0;
}

Clife_live::Clife_live()
{
	this->my_init();
}

Clife_live::~Clife_live()
{

}

#ifndef LIFE_LIVE_TEST
#define LIFE_LIVE_TEST 0//1
#endif

#if LIFE_LIVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
