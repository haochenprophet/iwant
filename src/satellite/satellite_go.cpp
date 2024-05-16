#include "satellite_go.h"
int Csatellite_go::my_init(void *p)
{
	this->name = "Csatellite_go";
	this->alias = "satellite_go";
	return 0;
}

Csatellite_go::Csatellite_go()
{
	this->my_init();
}

Csatellite_go::~Csatellite_go()
{

}

#ifndef SATELLITE_GO_TEST
#define SATELLITE_GO_TEST 0//1
#endif

#if SATELLITE_GO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
