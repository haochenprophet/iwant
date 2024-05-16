#include "radar_synchronism.h"
int Cradar_synchronism::my_init(void *p)
{
	this->name = "Cradar_synchronism";
	this->alias = "radar_synchronism";
	return 0;
}

Cradar_synchronism::Cradar_synchronism()
{
	this->my_init();
}

Cradar_synchronism::~Cradar_synchronism()
{

}

#ifndef RADAR_SYNCHRONISM_TEST
#define RADAR_SYNCHRONISM_TEST 0//1
#endif

#if RADAR_SYNCHRONISM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
