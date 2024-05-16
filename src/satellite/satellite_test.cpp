#include "satellite_test.h"
int Csatellite_test::my_init(void *p)
{
	this->name = "Csatellite_test";
	this->alias = "satellite_test";
	return 0;
}

Csatellite_test::Csatellite_test()
{
	this->my_init();
}

Csatellite_test::~Csatellite_test()
{

}

#ifndef SATELLITE_TEST_TEST
#define SATELLITE_TEST_TEST 0//1
#endif

#if SATELLITE_TEST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
