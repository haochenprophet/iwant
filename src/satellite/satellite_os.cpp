#include "satellite_os.h"
int Csatellite_os::my_init(void *p)
{
	this->name = "Csatellite_os";
	this->alias = "satellite_os";
	return 0;
}

Csatellite_os::Csatellite_os()
{
	this->my_init();
}

Csatellite_os::~Csatellite_os()
{

}

#ifndef SATELLITE_OS_TEST
#define SATELLITE_OS_TEST 0//1
#endif

#if SATELLITE_OS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
