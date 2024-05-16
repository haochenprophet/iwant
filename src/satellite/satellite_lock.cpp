#include "satellite_lock.h"
int Csatellite_lock::my_init(void *p)
{
	this->name = "Csatellite_lock";
	this->alias = "satellite_lock";
	return 0;
}

Csatellite_lock::Csatellite_lock()
{
	this->my_init();
}

Csatellite_lock::~Csatellite_lock()
{

}

#ifndef SATELLITE_LOCK_TEST
#define SATELLITE_LOCK_TEST 0//1
#endif

#if SATELLITE_LOCK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
