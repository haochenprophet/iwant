#include "radar_name.h"
int Cradar_name::my_init(void *p)
{
	this->name = "Cradar_name";
	this->alias = "radar_name";
	return 0;
}

Cradar_name::Cradar_name()
{
	this->my_init();
}

Cradar_name::~Cradar_name()
{

}

#ifndef RADAR_NAME_TEST
#define RADAR_NAME_TEST 0//1
#endif

#if RADAR_NAME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
