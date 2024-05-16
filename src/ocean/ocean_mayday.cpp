#include "ocean_mayday.h"
int Cocean_mayday::my_init(void *p)
{
	this->name = "Cocean_mayday";
	this->alias = "ocean_mayday";
	return 0;
}

Cocean_mayday::Cocean_mayday()
{
	this->my_init();
}

Cocean_mayday::~Cocean_mayday()
{

}

#ifndef OCEAN_MAYDAY_TEST
#define OCEAN_MAYDAY_TEST 0//1
#endif

#if OCEAN_MAYDAY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
