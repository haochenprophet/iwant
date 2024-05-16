#include "satellite_file.h"
int Csatellite_file::my_init(void *p)
{
	this->name = "Csatellite_file";
	this->alias = "satellite_file";
	return 0;
}

Csatellite_file::Csatellite_file()
{
	this->my_init();
}

Csatellite_file::~Csatellite_file()
{

}

#ifndef SATELLITE_FILE_TEST
#define SATELLITE_FILE_TEST 0//1
#endif

#if SATELLITE_FILE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
