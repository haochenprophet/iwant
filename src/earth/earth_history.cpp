#include "earth_history.h"
int Cearth_history::my_init(void *p)
{
	this->name = "Cearth_history";
	this->alias = "earth_history";
	return 0;
}

Cearth_history::Cearth_history()
{
	this->my_init();
}

Cearth_history::~Cearth_history()
{

}

#ifndef EARTH_HISTORY_TEST
#define EARTH_HISTORY_TEST 0//1
#endif

#if EARTH_HISTORY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
