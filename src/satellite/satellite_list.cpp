#include "satellite_list.h"
int Csatellite_list::my_init(void *p)
{
	this->name = "Csatellite_list";
	this->alias = "satellite_list";
	return 0;
}

Csatellite_list::Csatellite_list()
{
	this->my_init();
}

Csatellite_list::~Csatellite_list()
{

}

#ifndef SATELLITE_LIST_TEST
#define SATELLITE_LIST_TEST 0//1
#endif

#if SATELLITE_LIST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
