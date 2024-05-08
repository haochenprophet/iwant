#include "radar_size.h"
int Cradar_size::my_init(void *p)
{
	this->name = "Cradar_size";
	this->alias = "radar_size";
	return 0;
}

Cradar_size::Cradar_size()
{
	this->my_init();
}

Cradar_size::~Cradar_size()
{

}

#ifndef RADAR_SIZE_TEST
#define RADAR_SIZE_TEST 0//1
#endif

#if RADAR_SIZE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
